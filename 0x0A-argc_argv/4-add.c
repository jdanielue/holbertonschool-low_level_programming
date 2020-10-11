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

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		result = atoi((argv[argc - 1])) + atoi(argv[argc - 2]);
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
