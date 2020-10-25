#include <stdlib.h>
#include "3-calc.h"

/**
 * GET_OP_FUNC - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

for (i = 0; i < 5; i++)
{
	if (s[0] == ops[i].op[0])
	{
		return (ops[i].f);
	}
	else
	{
		return (NULL);
	}
	
}

}
}
