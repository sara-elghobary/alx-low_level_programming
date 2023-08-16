#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 *
 * Description: This function prints every minute of the day of Jack Bauer
 *              in the format HH:MM.
 */
void jack_bauer(void)
{
int ch, sh;

for (ch = 0; ch <= 23; ch++)
{
for (sh = 0; sh <= 59; sh++)
{
_putchar(ch / 10 + '0');
_putchar(ch % 10 + '0');
_putchar(':');
_putchar(sh / 10 + '0');
_putchar(sh % 10 + '0');
_putchar('\n');
}
}
}
