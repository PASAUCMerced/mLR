import numpy as np

def calculate_similarity_score(predicted_values, exact_values):
    diff = predicted_values - exact_values
    diff_norm = np.linalg.norm(diff)
    exact_values_norm = np.linalg.norm(exact_values)
    return max(1 - diff_norm / exact_values_norm, 0)


def load_and_process_data(path_prefix="",position = "top"):
    # Define groups of data files and their starting iterations
    groups = [
        ([1]),    # Iterations 1-5
        ([2]),    # Iterations 6-10
        ([3, 4]), # Iterations 16-25
        ([5, 6]), # Iterations 26-35
        ([7, 8]), # Iterations 36-45
        ([9, 10]),# Iterations 46-55
        ([11, 12]),# Iterations 56-65,
        ([13, 14]),# Iterations 66-75
    ]
    #if position = top. index = 700-708
    if position == "top":
        index = 100
        index_end = 108
    if position == "bottom":
        index =900
        index_end = 908
    
    iterations_ch1 = []   # Initialize list for 75 iterations
    filename= "usfft1d_value_"
    
    for xs  in groups:
        for x in xs:
            for y in range(5):
                file_path = f"{path_prefix}{filename}{x}_{y}.npy"
                data = np.load(file_path)
                slice_data = data[index:index_end, :, :]
                iterations_ch1.append( slice_data.copy())
                del data  # Free memory
    return iterations_ch1

if __name__ == "__main__":
    
    # Load and process data, can be hundreds of GB to 1 TB

    path_prefix = "/grand/xxxxxxx/usfft1d_fwd/"
    chunk_location = "top"
    iterations_ch1 = load_and_process_data(path_prefix,chunk_location)
    
    print("Loaded data shape:", len(iterations_ch1), iterations_ch1[0].shape)
    # Calculate similarity scores
    counter = []
    for i in range(1, 70):
        current = iterations_ch1[i]
        count = 0
        for j in range(1, i):
            previous = iterations_ch1[j-1]
            if calculate_similarity_score(current, previous) > 0.93:
                count += 1
        counter.append(count)
    
    print("Similarity counts for position 1:", counter)