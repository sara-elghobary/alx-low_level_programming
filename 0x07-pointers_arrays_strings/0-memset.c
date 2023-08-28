#include "main.h"
/**
 * _memset - Fill a memory area with a constant byte
 * @s: Pointer to the memory area to fill
 * @b: The constant byte to fill with
 * @n: Number of bytes to fill
 *
 *Return: Pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
    int i;

    if (n > 0)
    {
        for (i = 0 ; i < n ; i++)
        {
            s[i] = b;
        }

    }
    return (s);
}
