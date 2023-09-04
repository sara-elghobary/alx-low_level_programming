#ifndef MYHEADERS_H
#define MYHEADERS_H

int add(int a, int b);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *_memset(char *s, char b, unsigned int n);
int _putchar(char c);

#endif
