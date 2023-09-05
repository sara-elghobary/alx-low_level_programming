#include "main.h"
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
 * argstostr - Concatenates all program arguments into a single string.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: A pointer to the concatenated string or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
char *result;
int index = 0;

if (ac == 0 || av == NULL)
return (NULL);
int total_length = 0;

for (int i = 0; i < ac; i++)
{
total_length += _strlen(av[i]) + 1;

result = (char *)malloc(total_length + 1);

if (result == NULL)
return (NULL);


for (int i = 0; i < ac; i++)
{
_strcpy(result + index, av[i]);
index += _strlen(av[i]);

if (i < ac - 1)
{
result[index] = '\n';
index++;
}
}

result[index] = '\0';
return (result);
}
}
