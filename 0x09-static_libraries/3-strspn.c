#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search in.
 * @accept: The string containing the characters to accept.
 *
 * Return: The number of bytes in the initial segment of 's'
 * which consist only of bytes from 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int num = 0;

while (*s != '\0')
{
char *a = accept;

while (*a != '\0')
{
if (*s == *a)
{
num++;
break;
}
a++;
}

if (*a == '\0')
{
break;
}
s++;
}

return (num);
}
