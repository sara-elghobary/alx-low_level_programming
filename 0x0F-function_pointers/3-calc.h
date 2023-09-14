#ifndef MYHEADERS_H
#define MYHEADERS_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;

#endif

#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);


#endif
