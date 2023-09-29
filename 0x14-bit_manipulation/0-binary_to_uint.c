#include <stdio.h>
#include "main.h"

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
if (b == NULL)
return (0);

int len = _strlen(b);
int i, bit_position;
unsigned int result = 0;

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
