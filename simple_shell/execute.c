#include "simple_shell.h"

void display_prompt() {
    write(STDOUT_FILENO, "$ ", 2);
    fflush(stdout);
}

void tokenize_command(char *command, char *args[]) {
    int i = 0;
    char *token = strtok(command, " ");
    while (token != NULL) {
        args[i++] = token;
        token = strtok(NULL, " ");
    }
    args[i] = NULL;
}



int contains_slash(char *str) {
    while (*str) {
        if (*str == '/') {
            return 1;
        }
        str++;
    }
    return 0;
}


void execute_command(char *command, int line_number, char *program_name) {
    pid_t pid;
    char *args[MAX_COMMAND_LENGTH];

    tokenize_command(command, args);

    pid = fork();

    if (pid == -1) {
        perror("fork");
        _exit(EXIT_FAILURE);
    } else if (pid == 0) {
        execute_external_command(args, program_name, line_number);
    } else {
        int status;
        waitpid(pid, &status, 0);
    }
}

void print_environment_variables() {
    extern char **environ;
    char **env;

    for (env = environ; *env != NULL; env++) {
        write(STDOUT_FILENO, *env, _strlen(*env));
        write(STDOUT_FILENO, "\n", 1);
    }
}
