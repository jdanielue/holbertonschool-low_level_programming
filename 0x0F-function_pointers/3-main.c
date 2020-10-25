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
	if ( argc != 4)
		{
		printf("Error\n");
		return(98);
		}
	if ( argv[2][1] != NULL)
		{
		printf("Error\n");
		return(99);
		}
	
	if (argv[3] == 0 && (argv[2] == % || argv[2] == "/"))
	{
		printf("Error\n");
		return(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", (*get_op_func(argv[2]))(a, b));
	return (0);
}