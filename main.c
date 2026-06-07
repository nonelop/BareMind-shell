#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#include "utils/help.h"

int main(int argc, char *argv[]) {

    char input[256];

    printf("Welcome to BareMind-shell\n\nType \"help\" for help.\n\n");

    while (1) {
        printf("~$: ");
        fflush(stdout);
        
        fgets(input, sizeof(input), stdin);
        
        if (!strcmp(input, "help\n") == true) {
            help();
        }
        else if (!strcmp(input, "exit\n") == true) {
            printf("Exit...\n");
            exit(0);
        }
        else {
            if (!strcmp(input, "\n") == false) {
                printf("Command not found. type \"help\" for help.\n");
            }
        }
    }
}