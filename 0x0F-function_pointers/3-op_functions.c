#include <stdlib.h>
#include "3-calc.h"

/**
 * GET_OP_FUNC - Struct op
 *
 * @a: The operator
 * @b: The function associated
 */


int op_add(int a, int b)
{
return (a + b);
}

int op_sub(int a, int b)
{
return (a - b);
}

int op_mul(int a, int b)
{
return (a * b);
}

int op_div(int a, int b)
{
return (a / b);
}

int op_mod(int a, int b)
{
return (a % b);
}
