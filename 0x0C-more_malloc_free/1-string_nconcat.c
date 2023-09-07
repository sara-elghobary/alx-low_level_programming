#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Calculates the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}

/**
 * _strcpy - Copies the string pointed to by src, including the null byte,
 *           to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}

dest[i] = '\0';

return (dest);
}

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to concatenate from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int len = _strlen(dest);
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[len] = src[i];
len++;
}
dest[len] = '\0';
return (dest);
}

/**
 * string_nconcat - Concatenates two strings up to n characters from s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of characters to concatenate from s2.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *strncon;
int lens1;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

lens1 = _strlen(s1);

if (n >= (unsigned int)_strlen(s2))
n = _strlen(s2);

strncon = (char *)malloc(lens1 + n + 1);

if (strncon == NULL)
return (NULL);

_strcpy(strncon, s1);
_strncat(strncon, s2, n);

return (strncon);
}
