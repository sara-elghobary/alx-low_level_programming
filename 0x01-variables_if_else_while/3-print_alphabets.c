#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	char letterr = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	while (letterr <= 'Z')
	{
		putchar(letterr);
		letterr++;
	}

	putchar('\n');

	return (0);
}
