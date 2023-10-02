#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>

/**
 * create_file - Create a file and write text content to it.
 * @filename: The name of the file to create.
 * @text_content: A NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure (file cannot be created,
 * write fails, etc.).
 *         The created file must have permissions: rw-------.
 *         If the file already exists, it will be truncated.
 *         If filename is NULL, return -1.
 *         If text_content is NULL, an empty file will be created.
 */
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t written;

if (filename == NULL || text_content == NULL)

return (-1);

fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);

written = write(fd, text_content, strlen(text_content));

if (written == -1)
{
close(fd);
return (-1);
}
close(fd);
return (1);
}
