#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>


/**
 * main - program that adds positive numbers
 *@argc:number of arguments
 *@argv: pointer array
 *Return: ALWAYS 0
 */

int main(int argc, char *argv[])
{
	int i, result;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		result = atoi((argv[i - 2])) + atoi(argv[i - 1]);
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
