#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Description:
 * This function prints the alphabet in lowercase by putchar function.
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
