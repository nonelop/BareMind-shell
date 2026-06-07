#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {

    char input[32];

    printf("Welcome to BareMind-CLI\n\nType \"help\" for help.\n\n");

    while (1) {
        printf("~$: ");
        fgets(input, sizeof(input), stdin);
        
        if (!strcmp(input, "help\n") == true) {
            printf("\nhelp - this message.\nexit- exit to the shell.\nlaunch <model.gguf> - launch model.\n\n");
        }
        else if (!strcmp(input, "exit\n") == true) {
            printf("OK\n");
        }
    }
}