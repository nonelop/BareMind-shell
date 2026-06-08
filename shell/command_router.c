#include "command_router.h"
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

#define COMMANDS_QUANTITY 4

const char* commands[COMMANDS_QUANTITY] = {
    "help\n",
    "exit\n",
    "clear\n",
    "launch\n"
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