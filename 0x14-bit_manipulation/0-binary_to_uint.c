#include <stdio.h>
#include "main.h"

 /**
 * _strlen - Calculates the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(const char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}

/**
 * binary_to_uint - Convert a binary string to an unsigned int.
 * @b: A pointer to the binary string containing '0' and '1' characters.
 *
 * Description: This function converts a binary string to an unsigned int.
 * It iterates through the binary string from right to left, setting the
 * corresponding bits in the result based on '1' characters in the string.
 *
 * Return: The converted unsigned int, or 0 if there are invalid characters
 *         in the string or if the input pointer 'b' is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
int i;
int bit_position;
int len;
unsigned int result = 0;

if (b == NULL)
return (0);


len = _strlen(b);


for (i = len - 1, bit_position = 0; i >= 0; i--, bit_position++)
{
if (b[i] == '1')
{
result |= (1u << bit_position);
}
else if (b[i] != '0')
{
return (0);
}
}

return (result);
}
