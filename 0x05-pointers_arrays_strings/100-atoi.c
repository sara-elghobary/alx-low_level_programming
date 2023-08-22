#include "main.h"

/**
 * myAtoi - Converts a string to an integer.
 * @str: The input string to convert.
 *
 * Return: The integer value represented by the input string.
 */
int myAtoi(char *str)
{
int res = 0;
int sign = 1;
int i = 0;

while (str[i] == ' ')
i++;

if (str[i] == '-')
{
sign = -1;
i++;
}
else if (str[i] == '+')
{
i++;
}

for (; str[i] != '\0'; i++)
{
if (str[i] < '0' || str[i] > '9')
{
break;
}
res = res * 10 + str[i] - '0';
}

return (sign *res);
}
