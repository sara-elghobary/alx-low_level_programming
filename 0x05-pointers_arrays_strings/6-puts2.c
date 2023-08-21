#include "main.h"

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
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: The input string.
 */
void puts2(char *str)
{
int i;

for (i = 0; i < _strlen(str); i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
