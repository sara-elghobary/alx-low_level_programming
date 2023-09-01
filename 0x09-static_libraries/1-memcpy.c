#include "main.h"

/**
 * _memcpy - Copy n bytes from src to dest
 * @dest: Destination memory buffer
 * @src: Source memory buffer
 * @n: Number of bytes to copy
 * Return: Pointer to destination memory buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0 ; i < n ; i++)
{
dest[i] = src[i];
}
return (dest);
}
