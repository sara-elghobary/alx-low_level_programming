#include <stdio.h>
#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The number from which to extract the bit.
 * @index: The index of the bit to retrieve (0-based).
 *
 * Return: The value of the bit at the specified index (0 or 1), or -1 if index is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int num_bits = sizeof(unsigned long int) * 8;
if (index >= num_bits)
{
return (-1);
}
return ((n >> index) & 1);
}
