#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the minimum number of coins to make change for money
 * @argc: parameter
 * @argv: Array of arguments
 *
 * Return: 0 success, 1 Error
 */

int main(int argc, char **argv)
{
	int n, i;
	int monedas, coin[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argv[1][0] == '-')
	{
		printf("0\n");
		return (1);
	}
	else
	{
		n = atoi(argv[1]);

		for (i = 0; i < 5; i++)
		{
			for (n = n - coin[i]; n - coin[i] >= 0; monedas++)
			{
			}
		}

		printf("%d\n", monedas);
		return (0);
	}
}
