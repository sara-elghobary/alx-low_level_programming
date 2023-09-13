#include "function_pointers.h"

/**
 * print_name - Print a name using a specified printing function.
 * @name: Pointer to the name string.
 * @f: Pointer to a function that prints the name.
 *
 * This function takes a name string and a function pointer to print the name
 * using the specified printing function.
 */
void print_name(char *name, void (*f)(char *))
{
int i;
int len = 0;

f(name);

while (*name != '\0')
{
len++;
name++;

}
name -= len;

for (i = 0 ; i < len ; i++)
{
_putchar(*name);
name++;
}
_putchar('\0');

}
