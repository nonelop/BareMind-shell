#include "tokenization.h"
#include <string.h>
#include <stdio.h>

#define MAX_TOKENS 32

char** tokenization(char* string) {
    static char* tokens[MAX_TOKENS];
    printf("%p\n", tokens);
    char* token = strtok(string, " ");
    tokens[0] = token;

    int i0 = 1;
    while (token != NULL) {
        token = strtok(NULL, " ");
        tokens[i0] = token;
        i0++;
    }

    return tokens;
}