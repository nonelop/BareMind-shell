#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include "utils/help.h"

int main(int argc, char *argv[]) {

    char input[32];

    printf("Welcome to BareMind-CLI\n\nType \"help\" for help.\n\n");

    while (1) {
        printf("~$: ");
        fgets(input, sizeof(input), stdin);
        
        if (!strcmp(input, "help\n") == true) {
            help();
        }
        else if (!strcmp(input, "exit\n") == true) {
            printf("OK\n");
        }
        else {
            printf("Command not found. type \"help\" for help.\n");
        }
    }
}