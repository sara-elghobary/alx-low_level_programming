#include <stdio.h>
#include "main.h"

int main(void)
{
	char c[8] = "_putchar";
	int ch;

	for (ch = 0 ; ch <= 7 ; ch++)
	{
		_putchar(c[ch]);
	}
	_putchar("\n");
	return (0);

}
