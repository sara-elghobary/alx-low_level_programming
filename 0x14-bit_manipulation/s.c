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

#include "main.h"

/**
 * _strlen - Calculate the length of a string.
 * @s: A pointer to the string.
 *
 * Description: This function calculates the length of the input string @s
 * by iterating through the characters until it encounters the null terminator
 * '\0'. The length is then returned as an integer.
 *
 * Return: The length of the string @s.
 */
int _strlen(const char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}

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
