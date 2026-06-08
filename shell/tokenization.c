#include "tokenization.h"
#include <string.h>
#include <stdio.h>

#define MAX_TOKENS 32

char** tokenization(char* string) {
    static char* tokens[MAX_TOKENS];
    char* token = strtok(string, " ");

    if (token != NULL) {
        token[strcspn(token, "\n")] = '\0';
    }

    tokens[0] = token;

    int i0 = 1;
    while (token != NULL) {
        token = strtok(NULL, " ");

        if (token != NULL) {
            token[strcspn(token, "\n")] = '\0';
        }

        tokens[i0] = token;
        i0++;
    }

    return tokens;
}