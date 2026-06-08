#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#include "utils/help.h"

#include "shell/tokenization.h"
#include "shell/command_router.h"

int main(int argc, char *argv[]) {

    char input[256];

    printf("Welcome to BareMind-shell\n\nType \"help\" for help.\n\n");

    while (1) {
        printf("~$: ");
        fflush(stdout);
        
        fgets(input, sizeof(input), stdin);
        
        char** tokens = tokenization(input);

        int valid = validation(tokens);
        if (valid == 1) {
            router(tokens);
        }
        else {
            if (tokens[0][0] != NULL) {
                printf("Command not found. Type \"help\" for help.\n");
            }
        }
    }
}