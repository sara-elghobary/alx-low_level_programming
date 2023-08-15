#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: This is the main entry point for the program.
 *
 * Return: Always 0 (Success)
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
