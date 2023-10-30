#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - Read and print data from a file to standard output.
 * @filename: The name of the file to read.
 * @letters: The maximum number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 * 0 on failure, including if filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
size_t total_letters;
ssize_t chunk_size;
ssize_t written;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = malloc(letters);
if (buffer == NULL)
{
close(fd);
exit(1);
}
total_letters = 0;

while (total_letters < letters)
{
chunk_size = read(fd, buffer, letters - total_letters);
if (chunk_size <= 0)
break;


written = write(STDOUT_FILENO, buffer, chunk_size);
if (written != chunk_size)
break;


total_letters += written;
}

free(buffer);
close(fd);

return (total_letters);
}
