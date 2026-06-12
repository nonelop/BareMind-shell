#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#include "utils/help.h"

#include "shell/tokenization.h"
#include "shell/command_router.h"
#include "shell/linenoise.h"

int main(int argc, char *argv[]) {

    printf("Welcome to BareMind-shell\n\nType \"help\" for help.\n\n");
    
    linenoiseHistoryLoad("hystory.txt");

    while (1) {
        char* input = linenoise("~$: ");
    
        linenoiseHistoryAdd(input);
        
        char** tokens = tokenization(input);

        if (tokens[0] != NULL) {

            int valid = validation(tokens);
            if (valid == 1) {
                router(tokens);
            }
            else {
                printf("Command not found. Type \"help\" for help.\n");
            }
            linenoiseHistorySave("hystory.txt");
            free(input);
        }
        else {
            free(input);
        }
    }
}