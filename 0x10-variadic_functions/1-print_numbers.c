#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Print numbers separated by a specified separator.
 *
 * This function takes a separator string and a
 * variable number of integers. It prints
 * the integers with the separator string between
 * them and a newline character at the end.
 * If the separator is NULL, it doesn't print anything
 * between the numbers.
 *
 * @separator: The string to be printed between numbers
 * (or NULL for no separator).
 * @n: The number of integers to print.
 * @...: The integer arguments to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;

va_list s;
va_start(s, n);

if (separator == NULL)
separator = "";

for (i = 0; i < n; i++)
{
if (i == n - 1)

printf("%d\n", va_arg(s, int));
else
printf("%s%d", separator, va_arg(s, int));

}

va_end(s);
}
