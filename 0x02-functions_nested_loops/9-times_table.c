#include <stdio.h>
#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Description: This function prints the 9 times table with specified format.
 */
void times_table(void)
{
int i, j, p;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
p = i * j;

if (j > 0)
{
_putchar(',');
_putchar(' ');

if (p < 10)
_putchar(' ');
}
_putchar(' ');
_putchar(p / 10 + '0');
_putchar(p % 10 + '0');
}

_putchar('\n');
}
}
