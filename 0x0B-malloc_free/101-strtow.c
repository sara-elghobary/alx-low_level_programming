#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

/**
 * _strncpy - Copies a string up to n bytes.
 * @dest: The destination buffer.
 * @src: The source string.
 * @n: The maximum number of bytes to copy.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string to be split.
 *
 * Return: An array of strings containing the words, or NULL on failure.
 */
char **strtow(char *str)
{
int wordLength;
int wordStart;
int i, j;
int wordCount = 0;
char **words;

if (str == NULL || *str == '\0')
return (NULL);
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ')
{
while (str[i] == ' ')
i++;
}
if (str[i] != '\0')
wordCount++;
}
words = (char **)malloc((wordCount + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
i = 0;
j = 0;
while (str[i] != '\0')
{
while (str[i] == ' ')
i++;
wordStart = i;
while (str[i] != ' ' && str[i] != '\0')
i++;
wordLength = i - wordStart;
words[j] = (char *)malloc((wordLength + 1) * sizeof(char));
if (words[j] == NULL)
return (NULL);
_strncpy(words[j], str + wordStart, wordLength);
words[j][wordLength] = '\0';
j++;
}
words[j] = NULL;
return (words);
}
