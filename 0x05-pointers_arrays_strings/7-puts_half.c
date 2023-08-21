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
 * puts_half - Prints the second half of a string.
 * @str: The input string.
 */
void puts_half(char *str)
{
int i;
int len = _strlen(str);

if (len % 2 == 0)
{
for (i = len / 2; i < len; i++)
{
_putchar(str[i]);
}
}
else
{
for (i = (len + 1) / 2; i < len; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
