#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to
 * flip to get from one number to another.
 * @n: The first unsigned long int number.
 * @m: The second unsigned long int number.
 *
 * Return: The number of bits to flip between n and m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;
unsigned int count = 0;

while (xor_result > 0)
{
count += xor_result & 1;
xor_result >>= 1;
}

return (count);
}
