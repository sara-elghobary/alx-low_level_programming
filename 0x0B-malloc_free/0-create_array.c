#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

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
unsigned int i;

if (n > 0)
{
for (i = 0 ; i < n ; i++)
{
s[i] = b;
}
}
return (s);
}

/**
 * create_array - Creates an array of characters
 * and initializes it with a specific character.
 * @size: The number of characters in the array.
 * @c: The character used for initialization.
 *
 * Return: If memory allocation fails or
 * size is 0, returns NULL.
 * Otherwise, returns a pointer to the
 * newly created and initialized array.
 */
char *create_array(unsigned int size, char c)
{
if (size == 0)
return (NULL);

char *array = (char *)malloc(size * sizeof(char));

if (array == NULL)
return (NULL);

memset(array, c, size);

return (array);

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
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *buffer;

    buffer = create_array(98, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}
