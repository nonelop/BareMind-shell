#include "get.h"
#include "search_model.h"
#include "models_database/models.h"
#include "shell/tokenization.h"
#include "utils/help.h"
#include <string.h>
#include <stdio.h>

int get(char* tokens[], int tokens_count) {
    for (int i = 0; i < tokens_count; i++) {
        if (strcmp(tokens[i], "get") != 0) {
            if (startswith(tokens[i], "-")) {
                switch (tokens[i][1]) {
                    case ('l'):
                        for (int j = 0; j < models_count; j++) {
                            printf("Model %d: %s\n", j + 1, models_list[j]->short_name);
                        }
                        break;
                    case ('h'):
                        break;
                    default:
                        printf("Unknown flag.\n");
                        break;
                 }
            }
            else {
                for (int j = 0; j < models_count; j++) {
                    int is_exist = 0;
                    if (!strcmp(models_list[j]->short_name, tokens[i])) {
                        printf("Model with this name exist!\n");
                        is_exist = 1;
                    }
                    if (j == models_count - 1 && is_exist == 0) {
                        printf("Model with this name does not exist.\n");
                    }
                }
            }
        }
    }
    return 1;
}
