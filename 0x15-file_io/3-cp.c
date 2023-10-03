#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * main - Copy the content of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line arguments.
 *
 * Return: 0 on success, or the corresponding exit code on error.
 */
int main(int argc, char *argv[]) {
    int fd_to, fd_from ;
    char buffer[BUFFER_SIZE];
    ssize_t bytes_read;
    const char *file_from, *file_to ;

    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        return 97;
    }
    file_from = argv[1];
    file_to = argv[2];
    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        return 98;
    }

    fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (fd_to == -1) {
        dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
        close(fd_from);
        return 99;
    }
    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        ssize_t bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1) {
            dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
            close(fd_from);
            close(fd_to);
            return 99;
        }
    }

    if (bytes_read == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        close(fd_from);
        close(fd_to);
        return 98;
    }
    if (close(fd_from) == -1 || close(fd_to) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (close(fd_from) == -1) ? fd_from : fd_to);
        return 100;
    }

    return 0;
}
