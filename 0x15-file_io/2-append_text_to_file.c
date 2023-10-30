#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file to append to.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t written;

if (filename == NULL)
return (-1);

if (text_content == NULL)
{
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
}
else
{
fd = open(filename, O_WRONLY | O_APPEND | O_CREAT, S_IRUSR | S_IWUSR);

if (fd == -1)
return (-1);

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
