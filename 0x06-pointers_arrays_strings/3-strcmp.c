#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Negative value if s1 is less than s2,
 *         Positive value if s1 is greater than s2,
 *         0 if both strings are equal.
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0')
{
if (*s1 == *s2)
return (0);
else if (*s1 > *s2)
{
return (*s1 - *s2);
break;
}
else if (*s1 < *s2)
{
return (*s1 - *s2);
break;
}
*s1++;
}
}
