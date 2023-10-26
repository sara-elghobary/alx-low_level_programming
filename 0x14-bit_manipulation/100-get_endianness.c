#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Checks the endianness of the computer's architecture.
 *
 * Return: 0 if the computer is big endian, 1 if it's little endian.
 */
int get_endianness(void)
{
unsigned char test_byte = 0x01;
unsigned char *byte_ptr = (unsigned char *)&test_byte;

if (*byte_ptr == 0x01)
{
return (1);
}
else
{
return (0);
}
}
