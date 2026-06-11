#ifndef MODELS_H
#define MODELS_H

typedef struct {
    char* short_name;
    char* full_name;
    char* quantization;
    int size; // in MB
    char* download_url;
} Model;

extern Model qwenV2_5B0_5;
extern Model qwenV2_5B1_5;
extern Model qwenV2_5B3_0;

extern Model* models_list[];
extern int models_count;

#endif