#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to check (represented by its ASCII value).
 *
 * Return: 1 if @c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
