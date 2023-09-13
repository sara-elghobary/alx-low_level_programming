#include "function_pointers.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
