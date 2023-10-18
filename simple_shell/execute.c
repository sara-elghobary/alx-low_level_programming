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



void execute_external_command(char *args[], char *program_name, int line_number)
{
    char *envp[] = {NULL};
    char exec_path[MAX_COMMAND_LENGTH];
    char *line_number_str;

    if (strchr(args[0], '/') != NULL)
    {
        execve(args[0], args, envp);
    }
    else
    {
        char *path = getenv("PATH");
        char *path_copy = _strdup(path);
        char *dir = strtok(path_copy, ":");
        while (dir != NULL)
        {
            int dir_len = _strlen(dir);
            int arg_len = _strlen(args[0]);
            if (dir_len + arg_len + 2 <= MAX_COMMAND_LENGTH)
            {
                _strcpy(exec_path, dir);
                exec_path[dir_len] = '/';
                _strcpy(exec_path + dir_len + 1, args[0]);

                if (access(exec_path, X_OK) == 0)
                {
                    execve(exec_path, args, envp);
                    break;
                }
            }

            dir = strtok(NULL, ":");
        }

        free(path_copy);
    }

    write(STDERR_FILENO, program_name, _strlen(program_name));
    write(STDERR_FILENO, ": ", 2);
    line_number_str = itoa(line_number, 10);
    write(STDERR_FILENO, line_number_str, _strlen(line_number_str));
    write(STDERR_FILENO, ": ", 2);
    write(STDERR_FILENO, args[0], _strlen(args[0]));
    write(STDERR_FILENO, ": not found\n", 12);
    _exit(EXIT_FAILURE);
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
