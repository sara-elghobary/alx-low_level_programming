#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Print strings separated by a specified separator.
 *
 * This function takes a separator string and a
 * variable number of strings. It prints
 * the strings with the separator string between
 * them and a newline character at the end.
 * If the separator is NULL, it doesn't print
 * anything between the strings. If a string
 * is NULL, it prints "(nil)" for that string.
 *
 * @separator: The string to be printed between
 * strings (or NULL for no separator).
 * @n: The number of strings to print.
 * @...: The string arguments to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
va_start(args, n);

unsigned int i;
const char *current_string;

for (i = 0; i < n; i++)
{
current_string = va_arg(args, const char *);

if (current_string == NULL)
{
printf("(nil)");
}
else
{
printf("%s", current_string);
}

if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}

va_end(args);

printf("\n");
}
