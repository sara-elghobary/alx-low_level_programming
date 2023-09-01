#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Checks if a character is alphabetic
 *
 * @c: The character to check
 *
 * Return: 1 if the character is alphabetic, 0 otherwise
 *
 * Description: This function checks if a character is alphabetic.
 */
int _isalpha(int c)
{
if (isalpha(c))
return (1);
else
return (0);
}
