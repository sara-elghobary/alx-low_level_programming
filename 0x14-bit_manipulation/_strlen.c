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
