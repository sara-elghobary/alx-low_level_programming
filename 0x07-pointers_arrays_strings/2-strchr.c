#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locate character in string
 * @s: Pointer to the string to search
 * @c: The character to search for
 * Return: Pointer to the first occurrence of c, or NULL if not found
 */
char *_strchr(char *s, char c)
{
for (; *s != '\0'; s++)
{
if (*s == c)
{
return (s);
}
}
return (NULL);
}
