#include "tokenization.h"
#include <string.h>
#include <stdio.h>

char* tokenization(char* string) {
    char* tokens[32] = {NULL};
    char* token = strtok(string, " ");
    tokens[0] = token;

    int i0 = 1;
    while (token != NULL) {
        token = strtok(NULL, " ");
        tokens[i0] = token;
        i0++;
    }

    for (int i1 = 0; i1 < 32; i1++) {
        if (tokens[i1] != NULL) {
            printf("%s\n", tokens[i1]);
        }
        else break;
    }
}