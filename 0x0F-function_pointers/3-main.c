#include <stdlib.h>
#include "3-calc.h"

/**
 *main - main
 *@i : counter
 *
 *
 */

int main(int argc, char *argv[])
{
int c, d;

	if ( argc != 4)
		{
		printf("Error\n");
		return(98);
		}
	if ( (argv[2]) == NULL)
		{
		printf("Error\n");
		return(99);
		}

	if ((argv[3][0]) == 0 && ((argv[2][0]) == '%' || (argv[2][0]) == '/'))
	{
		printf("Error\n");
		return(99);
	}
	c = atoi(argv[1]);
	d = atoi(argv[3]);
	printf("%d\n", get_op_func(argv[2])(c, d));
	return (0);
}