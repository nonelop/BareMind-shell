#include "help.h"
#include <stdio.h>

int help(char* tokens[32]) {
    puts(
        "\nBareMind-shell | Shell for launching and managing AI models\n\n"
        "USAGE:\n\t<COMMAND> [FLAGS] [ARGS]\n\n"
        "COMMANDS:\n\tlaunch\tLaunch a model\n\tget\tDownload a model to models folder\n\texit\tExit to the linux shell\n\tclear\tClear screen\n\n"
        "FLAGS:\n\t-h\tShow detailed help message for command\n\n"
        "EXAMPLES:\n\t~$: launch model-3b\n\t~$: get qwen2.5-3b\n\t~$: get -l\n\n"
    );
}

int help_get(char* tokens[32]) {
    puts(
        "\nGET COMMAND\n\n"
        "USAGE:\n\tget [FLAGS] <MODEL>\n\n"
        "FLAGS:\n\t-h\tShow help message\n\t-l\tShow list of avaliable models\n\n"
        "The get command is used to download models from the repository database to the 'models/' folder.\n\n"
    );
}