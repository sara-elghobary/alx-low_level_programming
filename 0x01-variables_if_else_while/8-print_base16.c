#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 * This program prints all the numbers of base 16 (hexadecimal) in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit;

	/* Print numbers '0' to '9' */
	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}

	/* Print letters 'a' to 'f' */
	for (digit = 'a'; digit <= 'f'; digit++)
	{
		putchar(digit);
	}

	/* Print a newline character */
	putchar('\n');

	return (0);
}
