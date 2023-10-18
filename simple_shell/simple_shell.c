#include "simple_shell.h"

int main(int argc, char *argv[]) {
    char *command = NULL;
    size_t len = 0;
    ssize_t read;
    int line_number = 0;
    (void)argc;

    while (1) {
        display_prompt();

        read = getline(&command, &len, stdin);
        if (read == -1) {
            write(STDOUT_FILENO, "\n", 1);
            break;
        }

        command[strcspn(command, "\n")] = '\0';
        line_number++;

        if (_strcmp(command, "exit") == 0) {
            break;
        } else if (_strcmp(command, "env") == 0) {
            print_environment_variables();
        } else {
            execute_command(command, line_number, argv[0]);
        }
    }

    free(command);
    return 0;
}
