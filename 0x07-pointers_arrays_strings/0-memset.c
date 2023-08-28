#include "main.h"
#include <stdio.h>


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

void simple_print_buffer(char *buffer, unsigned int size)
{
        unsigned int i;

        i = 0;
        while (i < size)
        {
                if (i % 10)
                {
                        printf(" ");
                }
                if (!(i % 10) && i)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[i]);
                i++;
        }
        printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[98] = {0x00};

    simple_print_buffer(buffer, 98);
    _memset(buffer, 0x01, 95);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);    
    return (0);
}
