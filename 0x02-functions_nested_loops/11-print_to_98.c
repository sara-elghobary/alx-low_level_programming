#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all numbers from n to 98
 * @n: The starting number
 *
 * Description: This function prints all numbers from n to 98, separated by commas and spaces.
 */
void print_to_98(int n)
{
    int i;

    if (n <= 98)
    {
        for (i = n; i <= 98; i++)
        {
            if (i < 98)
            {
                printf("%d, ", i);
            }
            else
            {
                printf("%d", i);
            }
        }
    }
    else
    {
        for (i = n; i >= 98; i--)
        {
            if (i > 98)
            {
                printf("%d, ", i);
            }
            else
            {
                printf("%d", i);
            }
        }
    }

    printf("\n");
}
