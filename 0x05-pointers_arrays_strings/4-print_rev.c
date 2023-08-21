#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a newline.
 * @s: The string to be printed in reverse.
 */
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

void print_rev(char *s)
{
int i;

for (i = _strlen(s) - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
