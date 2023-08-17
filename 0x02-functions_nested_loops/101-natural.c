#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program calculates the sum of divisors of 1024.
 *
 * Return: Always 0 (Success)
 */
int main() {
    int n = 1;
    int sum = 0;

    while (n <= 1024)
    {
        if (1024 % n == 0)
        {
            sum += n;
        }
        n++;
    }
    printf("%d", sum);
    return sum;
}
