#include “main.h”

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string.
 */
char *_strcat(char *dest, char *src)
{
int len = _strlen(dest);

while (*src != '\0')
{
dest[len] = *src;
src++;
len++;
}

dest[len] = '\0';

return (dest);
}
