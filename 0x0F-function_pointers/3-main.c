#include <stdlib.h>
#include "3-calc.h"

/**
 *main - main
 *@argc: counts strings
 *@argv: pointer to strings
 *Return: void
 */

int main(int argc, char *argv[])
{
int num1, num3;
num1 = atoi(argv[1]);

num3 = atoi(argv[3]);

	if (argc != 4)
		{
		printf("Error\n");
		exit(98);
		}
	if ((argv[2]) == NULL || (argv[2][1]) != '\0')
		{
		printf("Error\n");
		exit(99);
		}

	if (num3 == 0 && ((argv[2][0]) == '%' || (argv[2][0]) == '/'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(num1, num3));
	return (0);
}
