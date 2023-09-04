#include "main.h"
#include <string.h>
#include <stdio.h>
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

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to a newly allocated
 * string containing the concatenated result,
 * or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
char *s;
int len;

len = strlen(s1) + strlen(s2);
s =  (char *)malloc(len + 1);
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

if (s == NULL)
return (NULL);

strcpy(s, s1);
strcat(s, s2);
return (s);

}
