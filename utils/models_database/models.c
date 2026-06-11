#include "models.h"

Model qwenV2_5B0_5 = {
    .short_name = "qwen-2.5-0.5b",
    .full_name = "Qwen2.5-0.5B-Instruct-GGUF",
    .quantization = "Q4_k_m",
    .size = 469,
    .download_url = "https://huggingface.co/Qwen/Qwen2.5-0.5B-Instruct-GGUF/resolve/main/qwen2.5-0.5b-instruct-q4_k_m.gguf?download=true",
};

Model qwenV2_5B1_5 = {
    .short_name = "qwen-2.5-1.5b",
    .full_name = "Qwen2.5-1.5B-Instruct-GGUF",
    .quantization = "Q4_k_m",
    .size = 1024,
    .download_url = "https://huggingface.co/Qwen/Qwen2.5-1.5B-Instruct-GGUF/resolve/main/qwen2.5-1.5b-instruct-q4_k_m.gguf?download=true"
};

Model qwenV2_5B3_0 = {
    .short_name = "qwen-2.5-3b",
    .full_name = "Qwen2.5-3B-Instruct-GGUF",
    .quantization = "Q4_k_m",
    .size = 2048,
    .download_url = "https://huggingface.co/Qwen/Qwen2.5-3B-Instruct-GGUF/resolve/main/qwen2.5-3b-instruct-q4_k_m.gguf?download=true"
};

Model* models_list[] = {
    &qwenV2_5B0_5,
    &qwenV2_5B1_5,
    &qwenV2_5B3_0,
};

int models_count = (sizeof(models_list) / sizeof(models_list[0]));