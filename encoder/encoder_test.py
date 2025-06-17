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


def inference_time(model, input_shape, num_inferences=10000):
    model.eval()  # Set the model to evaluation mode
    dummy_input = torch.randn(1, *input_shape, device=device)
    for _ in range(50):
        _ = model(dummy_input)
    start_time = time.time()
    for _ in range(num_inferences):
        # with torch.no_grad():  
        _ = model(dummy_input)
    end_time = time.time()
    total_inference_time = end_time - start_time
    average_inference_time = total_inference_time / num_inferences
    return average_inference_time

# device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
device = torch.device("cpu")
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
    
class Complex2vec(nn.Module):
    def __init__(self, input_channels, num_features):   
        super(Complex2vec, self).__init__()   
        self.conv1 = nn.Conv2d(input_channels, 16, kernel_size=3, stride=2, padding=1)    
        self.pool1 = nn.MaxPool2d(kernel_size=2, stride=2)   
        self.conv2 = nn.Conv2d(16, 32, kernel_size=3, stride=2, padding=1)   
        self.pool2 = nn.MaxPool2d(kernel_size=3, stride=2, padding=1)   
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



# class Complex2vec(nn.Module):
#     def __init__(self, input_channels, num_features):
#         super(Complex2vec, self).__init__()
#         self.conv1 = nn.Conv2d(input_channels, 16, kernel_size=5, stride=2, padding=2)
#         self.conv2 = nn.Conv2d(16, 32, kernel_size=5, stride=1, padding=2)
#         self.pool1 = nn.MaxPool2d(kernel_size=2, stride=2)

#         self.conv3 = nn.Conv2d(32, 64, kernel_size=5, stride=2, padding=2)
#         self.conv4 = nn.Conv2d(64, 128, kernel_size=5, stride=2, padding=2)
#         self.pool2 = nn.MaxPool2d(kernel_size=2, stride=2)

#         self.conv5 = nn.Conv2d(128, 256, kernel_size=5, stride=2, padding=2)
#         self.pool3 = nn.AdaptiveAvgPool2d((4, 4))  # output shape (256, 4, 4)

#         self.flatten = nn.Flatten()
#         self.fc = nn.Linear(256 * 4 * 4, num_features)

#     def forward(self, x):
#         x = F.relu(self.conv1(x))
#         x = F.relu(self.conv2(x))
#         x = self.pool1(x)

#         x = F.relu(self.conv3(x))
#         x = F.relu(self.conv4(x))
#         x = self.pool2(x)

#         x = F.relu(self.conv5(x))
#         x = self.pool3(x)

#         x = self.flatten(x)
#         x = self.fc(x)
#         return x
  


if __name__ == "__main__":
    # torch.set_num_threads(30)
    model = Complex2vec(input_channels=16, num_features=80).to(device)

    # model.load_state_dict(torch.load("/*/usfft1d_fwd_8_model.pth"))
    # model = Complex2vec(input_channels=16, num_features=80).to(device)

    model.eval()
    print("model loaded")
    inference_time1 = inference_time(model, (16, 384, 1152), num_inferences = 500)
    print(f"Average inference time: {inference_time1} seconds")
