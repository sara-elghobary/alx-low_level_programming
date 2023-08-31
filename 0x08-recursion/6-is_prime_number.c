#include "main.h"

/**
 * is_divisible - Checks if a number is divisible
 * by any number up to its square root.
 * @n: The number to check.
 * @divisor: The divisor to start checking from.
 *
 * Return: 1 if n is not divisible by any number
 * up to its square root, 0 otherwise.
 */
int is_divisible(int n, int divisor)
{
if (divisor * divisor > n)
{
return (1);
}

if (n % divisor == 0)
return (0);


return (is_divisible(n, divisor + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}

return (is_divisible(n, 2));
}
