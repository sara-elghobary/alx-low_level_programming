#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a newline.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
int i;

for (i = _strlen(s) - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
