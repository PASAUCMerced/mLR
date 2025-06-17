import torch
import torch.nn as nn
import torch.nn.functional as F
import torch.optim as optim
from torch.utils.data import Dataset, DataLoader
from torchvision import transforms
import numpy as np
import time
import pickle
import os

device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
class CustomDataset(Dataset):
    # def __init__(self, x0, x1, y):
    #     # Convert numpy array to torch tensor
    #     self.x0 = torch.tensor(x0, dtype=torch.float32).view(-1, 16, 384, 1152)
    #     self.x1 = torch.tensor(x1, dtype=torch.float32).view(-1, 16, 384, 1152)
    #     self.y = torch.tensor(y, dtype=torch.float32)  # Assuming y is already the correct shape
    def __init__(self, x0, x1):
        # Convert numpy array to torch tensor
        self.x0 = torch.tensor(x0, dtype=torch.float32).view(-1, 16, 384, 1152)
        self.x1 = torch.tensor(x1, dtype=torch.float32).view(-1, 16, 384, 1152)
        # self.y = torch.tensor(y, dtype=torch.float32)  # Assuming y is already the correct shape

    def __len__(self):
        # Return the number of samples
        return self.x0.shape[0]

    def __getitem__(self, idx):
        # Return the sample at the given index
        return self.x0[idx], self.x1[idx]


# class Complex2vec(nn.Module):
#     def __init__(self, input_channels, num_features):
#         super(Complex2vec, self).__init__()
#         self.conv1 = nn.Conv2d(input_channels, 8, kernel_size=3, stride=4, padding=1)  
#         self.conv2 = nn.Conv2d(32, 8, kernel_size=3, stride=4, padding=1)  
#         self.fc = nn.Linear(64, num_features)  
#         self.flatten = nn.Flatten()
    
#     def forward(self, x):
#         x = F.relu(self.conv1(x))
#         x = F.relu(self.conv2(x))
#         x = self.flatten(x)
#         x = self.fc(x)
#         return x
    
class Complex2vec(nn.Module):
    def __init__(self, input_channels, num_features):
        super(Complex2vec, self).__init__()
        self.conv1 = nn.Conv2d(input_channels, 16, kernel_size=5, stride=2, padding=2)
        self.pool1 = nn.MaxPool2d(kernel_size=2, stride=2) 
        self.conv2 = nn.Conv2d(16, 32, kernel_size=5, stride=2, padding=2)
        self.pool2 = nn.MaxPool2d(kernel_size=2, stride=2)  

        self.fc = nn.Linear(55296, num_features)
        self.flatten = nn.Flatten()

    def forward(self, x):
        x = F.relu(self.conv1(x))
        x = self.pool1(x)  
        x = F.relu(self.conv2(x))
        x = self.pool2(x)  
        x = self.flatten(x)
        x = self.fc(x)
        return x



class RegressionLoss(torch.nn.Module):
    def __init__(self):
        super(RegressionLoss, self).__init__()
        
    def compute_target_diff(self, x0, x1):
    # 假设 x0 和 x1 的形状为 (batch, H, W)，
    # 按照 numpy 的逻辑，先计算每个样本中所有元素的平方差和再开平方
        diff = x0 - x1 # 结果形状为 (batch, 16, 384, 1152)
        print(diff.shape)
        y = torch.sqrt(torch.sum(diff**2, dim=(2,3)))  # 结果形状为 (batch, 16)
        # y = y.view(-1, 16)
        target_diff = torch.sum(y, dim=1) / 16  # 结果形状为 (batch,)
        print(target_diff.shape)
        return target_diff
    
    def euclidean_distance(self, output1, output2):
        return (output1 - output2).pow(2).sum(1).sqrt()

    def forward(self, x0,x1, output1, output2):
        # calculate the euclidean distance between the two outputs
        target_diff = self.compute_target_diff(x0,x1)
        dist = self.euclidean_distance(output1, output2)
        
        # loss is the L1 distance between the predicted distance and the target distance
        loss = F.l1_loss(dist, target_diff)
        return loss

def save_checkpoint(model, optimizer, epoch, loss, filepath):
    torch.save({
        'model_state_dict': model.state_dict(),
        'optimizer_state_dict': optimizer.state_dict(),
        'epoch': epoch,
        'loss': loss,
    }, filepath)

def load_checkpoint(model, optimizer, filepath):
    checkpoint = torch.load(filepath)
    model.load_state_dict(checkpoint['model_state_dict'])
    optimizer.load_state_dict(checkpoint['optimizer_state_dict'])
    epoch = checkpoint['epoch']
    loss = checkpoint['loss']
    return model, optimizer, epoch, loss


def find_reduced_size(model, input_shape):
    with torch.no_grad():  
        dummy_input = torch.zeros(input_shape)
        features = model.flatten(model.pool2(F.relu(model.conv2(model.pool1(F.relu(model.conv1(dummy_input)))))))
        return features.shape[1]  

    
def inference_time(model, input_shape, num_inferences=100):
    model.eval()  # Set the model to evaluation mode
    dummy_input = torch.randn(1, *input_shape, device=device)
    for _ in range(10):
        _ = model(dummy_input)
    start_time = time.time()
    for _ in range(num_inferences):
        with torch.no_grad():  
            _ = model(dummy_input)
    end_time = time.time()
    total_inference_time = end_time - start_time
    average_inference_time = total_inference_time / num_inferences
    return average_inference_time

def train_model(model, dataloader, loss_fn, optimizer, num_epochs, checkpoint_path=None):
    start_epoch = 0
    best_loss = float('inf')  # Track the best loss for saving checkpoints

    if checkpoint_path and os.path.exists(checkpoint_path):
        model, optimizer, start_epoch, best_loss = load_checkpoint(model, optimizer, checkpoint_path)
        print(f"Resuming training from epoch {start_epoch+1}...")

    for epoch in range(start_epoch, num_epochs):
        print(f"Epoch {epoch+1}")
        epoch_loss = 0.0  # Accumulate loss for each epoch
        for x0_batch, x1_batch in dataloader:
            x0_batch, x1_batch = x0_batch.to(device), x1_batch.to(device)
            optimizer.zero_grad()
            output0 = model(x0_batch)
            output1 = model(x1_batch)
            loss = loss_fn(x0_batch, x1_batch, output0, output1)
            loss.backward()
            optimizer.step()
            epoch_loss += loss.item() # Add loss for this batch

        epoch_loss /= len(dataloader)  # Average loss over all batches
        print(f"Epoch {epoch+1} Loss: {epoch_loss}")

        # Save checkpoint if current loss is better than the best loss
        if epoch_loss < best_loss:
            best_loss = epoch_loss
            save_checkpoint(model, optimizer, epoch, epoch_loss, checkpoint_path)
            print(f"Checkpoint saved at epoch {epoch+1}")

    return model

def save_dataset(dataset, filepath):
    with open(filepath, 'wb') as f:
        pickle.dump(dataset, f)

def load_dataset(filepath):
    with open(filepath, 'rb') as f:
        return pickle.load(f)

if __name__ == "__main__":
    # create a random 4D numpy array
    x00 = np.load("/*/usfft1d_x0_train.npy")[:20480]
    x01 = np.load("/*usfft1d_x1_train.npy")[-10240:]
    x0 = np.zero((30720, 16, 384, 1152))
    x0[:20480] = x00
    x0[20480:] = x01
    # print("x0 shape: ", x0.shape)
    x1 = np.load("/*/usfft1d_x1_train.npy")[-30720:]
    # print("x1 shape: ", x1.shape)
    # x0 = np.random.randn(3200, 384, 1152)
    # x1 = x0.copy()
    # np.random.shuffle(x1)
    num_epochs = 5
    # create a CustomDataset object
    dataset_train = CustomDataset(x0, x1)

    
    # print("dataset_train done")
    dataloader_train = DataLoader(dataset_train, batch_size=32, shuffle=True, drop_last=True)
    dataset_filepath = "/*/usfft1d_dataset.pkl"
    save_dataset(dataset_train, dataset_filepath)  # Save the dataset
    # print(f"Dataset saved to {dataset_filepath}")    
    
    # Load the dataset
    # loaded_dataset = load_dataset(dataset_filepath)
    # dataloader_train = DataLoader(loaded_dataset, batch_size=32, shuffle=True, drop_last=True)
    # print(f"Dataset loaded from {dataset_filepath}")



    # initialize the model, loss function, and optimizer
    model = Complex2vec(input_channels=16, num_features=80).to(device)
    loss_fn = RegressionLoss().to(device)
    optimizer = optim.Adam(model.parameters(), lr=0.005)
    checkpoint_path = "/*/usfft1d_fwd_8_model_checkpoint.pth"  # Path for checkpoints
    # # train the model
    model = train_model(model, dataloader_train, loss_fn, optimizer, num_epochs, checkpoint_path)


    
    save_path = "/*/usfft1d_fwd_8_model.pth"
    torch.save(model.state_dict(), save_path)
    print(f"Model saved to {save_path}")
    
    
    
    
    
    
    
    
    
    
    
    
    

    # # # load the model parameters
    # model.load_state_dict(torch.load("/*/usfft1d_fwd_8_model.pth"))
    # model.eval()
    
    # # print the model architecture
    # print(model)
    # #do inference on the trained data x0
    # inference_time1 = inference_time(model, (16, 384, 1152))
    # print(f"Average inference time: {inference_time1} seconds")

    # x0=torch.tensor(x0[:3200], dtype=torch.float32).view(-1, 16, 384, 1152).to(device)
    # usfft1d_embeded_keys_train = model(x0)
    # np.save("/*/usfft1d_embeded_keys.npy", usfft1d_embeded_keys_train.cpu().detach().numpy())


    # x = np.load("/*/usfft1d_fwd/usfft1d_x0_test.npy")
    
    # x = torch.tensor(x, dtype=torch.float32).view(-1, 16, 384, 1152).to(device)
    
    # output0 = model(x)
    # # print the output shape
    # print(output0.shape)
    # print(output0)
    # # save the output to a file
    # np.save("*/usfft1d_embeded_keys_test.npy", output0.cpu().detach().numpy())
    
    


