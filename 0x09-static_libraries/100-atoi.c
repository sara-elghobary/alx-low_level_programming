#include "main.h"

/**
 * myAtoi - Converts a string to an integer.
 * @str: The input string to convert.
 *
 * Return: The integer value represented by the input string.
 */
int _atoi(char *s)
{
int res = 0;
int sign = 1;
int i = 0;

while (s[i] == ' ')
i++;

if (s[i] == '-')
{
sign = -1;
i++;
}
else if (s[i] == '+')
{
i++;
}

for (; s[i] != '\0'; i++)
{
if (s[i] < '0' || s[i] > '9')
{
break;
}
res = res * 10 + s[i] - '0';
}

return (sign *res);
}
