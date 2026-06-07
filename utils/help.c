#include "help.h"
#include <stdio.h>

int help() {
    puts(
        "\nBareMind-shell | Shell for launching and managing AI models\n\n"
        "USAGE:\n\t<COMMAND> [FLAGS] [ARGS]\n\n"
        "COMMANDS:\n\tlaunch\tLaunch a model\n\tget\tDownload a model to models folder\n\texit\tExit to the linux shell\n\n"
        "FLAGS:\n\t-h, --help\tShow detailed help message for command\n\n"
        "EXAMPLES:\n\t~$: launch model-3b\n\t~$: get qwen2.5-3b\n\t~$: get --list\n\n"
    );
}