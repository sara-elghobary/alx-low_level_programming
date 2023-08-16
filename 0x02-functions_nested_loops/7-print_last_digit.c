#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: The integer from which to extract the last digit
 *
 * Return: The value of the last digit
 *
 * Description: This function returns
 * the value of the last digit of an integer.
 */
int print_last_digit(int n)
{
int last_digit = n % 10;

return (last_digit);
}
