#include "simple_shell.h"


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

char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}

dest[i] = '\0';

return (dest);
}





char *_strdup(char *str)
{
int len;
char *s;

if (str == NULL)
return (NULL);

len = _strlen(str);

s = (char *)malloc(len + 1);

if (s == NULL)
return (NULL);

_strcpy(s, str);

return (s);
}


int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}

return (*s1 - *s2);
}


char *itoa(int val, int base){
    static char buf[32] = {0};
    int i = 30;
    for(; val && i ; --i, val /= base)
        buf[i] = "0123456789abcdef"[val % base];
    return &buf[i+1];
}
