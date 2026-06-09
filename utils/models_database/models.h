#ifndef MODELS_H
#define MODELS_H

typedef struct {
    char* short_name;
    char* full_name;
    char* download_url;
} Model;

extern Model qwenV2_5B0_5;
extern Model qwenV2_5B1_5;
extern Model qwenV2_5B3_0;

#endif