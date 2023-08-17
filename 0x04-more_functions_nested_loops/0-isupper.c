#include <stdio.h>
#include "main.h"

/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character to check (represented by its ASCII value).
 *
 * Return: 1 if @c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
if (isupper(c))
return (1);
else
return (0);
}
