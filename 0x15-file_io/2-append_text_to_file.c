#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>

/**
 * append_text_to_file - Append text to the end of a file.
 * @filename: The name of the file to which text will be appended.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 *   - If filename is NULL, return -1.
 *   - If text_content is NULL, do not add anything to the file and return 1.
 *   - If the file does not exist or if you do not have
 *   write permissions, return -1.
 *   - Data is appended to the end of the file without truncating it.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t written;

if (filename == NULL || text_content == NULL)
return (-1);


fd = open(filename, O_WRONLY | O_APPEND);
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
