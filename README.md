# mLR

Memoization-based Scalable Laminography Reconstruction.


## Install and setup

We use conda to manage the environment

GPU: NVIDIA A100 GPU with 40GB memory $\times 4$
CPU: 32-core AMD EPYC 7543P 32-Core Processor 


```shell
cd /OpenLR/
conda env create --name mLR -f install.yml
pip install .
```

## Similarity profiling

To check the similarity between chunks over iteration at a same location.

```shell
cd OpenLB/Tests
python test_similarity.py
```

## CNN encoder

To train the CNN encoder, please use the dataset in https:

```shell
    cd OpenLB/encoder/
    python encoder_train.py
    python encoder_test.py
```
Training the CNN encoder from scratch: Approximately 200 minutes

## Run reconstruction

```shell
    cd OpenLB/Tests/
    python test_admm_brain.py
````


