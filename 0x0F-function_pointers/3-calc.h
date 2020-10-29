#ifndef OPFUNCTIONS_H
#define OPFUNCTIONS_H
#include "stdio.h"
#include "stdlib.h"


/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
int (*f)(int a, int b);
char *op;
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
