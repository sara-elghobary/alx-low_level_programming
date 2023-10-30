#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>

/**
 * create_file - Create a file with specified content and permissions.
 * @filename: The name of the file to create.
 * @text_content: The NULL-terminated string to write
 * to the file (can be NULL).
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t written;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

if (fd == -1)
return (-1);

if (text_content != NULL)
{
written = write(fd, text_content, strlen(text_content));

if (written == -1)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
