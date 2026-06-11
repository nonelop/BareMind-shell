#include "get.h"
#include "search_model.h"
#include "models_database/models.h"
#include "shell/tokenization.h"
#include "utils/help.h"
#include <string.h>
#include <stdio.h>

int get(char* tokens[], int tokens_count) {
    int operation_successful = 0;

    for (int i = 0; i < tokens_count; i++) {
        if (strcmp(tokens[i], "get") != 0) {
            if (startswith(tokens[i], "-")) {
                switch (tokens[i][1]) {
                    case ('l'):
                        for (int j = 0; j < models_count; j++) {
                            printf("Model %d: %s\n", j + 1, models_list[j]->short_name);
                        }
                        operation_successful = 1;
                        break;
                    case ('h'):
                        help_get();
                        operation_successful = 1;
                        break;
                    default:
                        operation_successful = 1;
                        printf("Unknown flag.\n");
                        break;
                 }
            }
            else {
                int is_exist = 0;
                for (int j = 0; j < models_count; j++) {
                    if (!strcmp(models_list[j]->short_name, tokens[i])) {
                        char* size_in = "MB";
                        Model* model = models_list[j];
                        float model_size = model->size;

                        if (model->size >= 1024) {
                            model_size = model->size / 1024;
                            size_in = "GB";
                        }

                        printf("\n%s\n\n", model->full_name);
                        printf("MODEL SPECIFICATIONS\n[QUANT]: %s\n[SIZE]: %.2f%s\n\n", model->quantization, model_size, size_in);

                        operation_successful = 1;
                        is_exist = 1;
                    }
                    else if (j == models_count - 1 && is_exist == 0) {
                        printf("Model with this name does not exist.\n");
                        operation_successful = 1;
                    }
                }
            }
        }
        if (i == tokens_count - 1 && !operation_successful) {
            printf("Bad usage. Type \"get -h\" for help.\n");
        } 
    }
    return 1;
}
