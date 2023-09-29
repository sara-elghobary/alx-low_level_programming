#include <stdio.h>
#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
unsigned int num_bits = sizeof(unsigned long int) * 8;
if (index >= num_bits)
{
return (-1);
}
return ((n >> index) & 1);
}
