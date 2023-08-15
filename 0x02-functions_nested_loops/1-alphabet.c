#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: This is the main entry point for the program.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a' ; ch <= 'z' ;ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
