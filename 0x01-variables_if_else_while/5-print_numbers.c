#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i; /* Declare the variable 'i' for the loop */

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0'); /* Print the digit character by adding '0' */
	}

	putchar('\n'); /* Print a newline character to move to the next line */

	return (0);
}
