#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the concatenated string.
 */
char *_strcat(char *dest, char *src)
{
int dest_len = 0;

while (dest[dest_len] != '\0')
{
dest_len++;
}

int i = 0;

while (src[i] != '\0')
{
dest[dest_len] = src[i];
dest_len++;
i++;
}

dest[dest_len] = '\0';

return (dest);
}
