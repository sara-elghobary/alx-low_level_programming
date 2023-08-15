#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	char c[8] = "_putchar";
	int ch;

	for (ch = 0 ; ch <= 7 ; ch++)
	{
		_putchar(c[ch]);
	}
	_putchar('\n');
	return (0);

}
