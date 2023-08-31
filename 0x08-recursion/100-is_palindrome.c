#include "main.h"

/**
 * _strlen - Calculate the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
int length = _strlen(s);

if (length <= 1)
return (1);

if (s[0] != s[length - 1])
return (0);

return (is_palindrome(s + 1));
}
