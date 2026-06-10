#include "command_router.h"
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include <utils/help.h>
#include <utils/get.h>

#define COMMANDS_QUANTITY 5

const char* commands[COMMANDS_QUANTITY] = {
    "help",
    "exit",
    "clear",
    "get",
    "launch"
};

int validation(char* tokens[32]) {
    char* command = tokens[0];
    
    for (int i = 0; i < COMMANDS_QUANTITY; i++) {
        if (!strcmp(command, commands[i]) == true) {
            break;
        }
        if (i == COMMANDS_QUANTITY - 1) {
            return 0;
        }
    }
    return 1;
}

int router(char* tokens[32]) {
    char* command = tokens[0];

    size_t tokens_count = 0;
    while (tokens[tokens_count] != NULL) {
        tokens_count++;
    }

    if (!strcmp(command, "help")) {
        help();
        return 1;
    }
    else if (!strcmp(command, "exit")) {
        printf("Exiting...\n");
        exit(0);
    }
    else if (!strcmp(command, "clear")) {
        system("clear");
        return 1;
    }
    else if (!strcmp(command, "get")) {
        get(tokens, tokens_count);
        return 1;
    }
}