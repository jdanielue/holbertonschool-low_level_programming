#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>


/**
 * main - program that multiplies two numbers
 *@argc:number of arguments
 *@argv: pointer array
 *Return: ALWAYS 0
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi((argv[argc - 1])) * atoi(argv[argc - 2]);
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
