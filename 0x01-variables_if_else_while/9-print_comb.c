#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 * This program prints all possible combinations of single-digit numbers,
 * separated by ", ", in ascending order. It uses the putchar function
 * a maximum of four times and does not use any variable of type char.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');

		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
