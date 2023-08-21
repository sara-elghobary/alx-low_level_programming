#include "main.h"

/**
 * _strlen - Calculates the length of a string.
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

#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
int length = _strlen(s);
int start = 0;
int end = length - 1;

while (start < end)
{
char temp = s[start];
s[start] = s[end];
s[end] = temp;

start++;
end--;
}
}
