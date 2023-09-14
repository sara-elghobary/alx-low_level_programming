#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Calculate the sum of a variable number of integers.
 *
 * This function takes an unsigned integer 'n' and a variable number of integer
 * arguments. It calculates and returns the sum of the first 'n' integer
 * arguments.
 *
 * @n: The number of integers to sum.
 * @ ...: The integer arguments to be summed.
 *
 * Return: The total sum of the first 'n' integer arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
return (0);

va_list sum;
va_start(sum, n);

unsigned int total = 0;

for (unsigned int i = 0; i < n; i++)
total += va_arg(sum, int);


va_end(sum);

return (total);
}
