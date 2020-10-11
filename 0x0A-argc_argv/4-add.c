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
	int a, i;

	a = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			a = a + atoi((argv[i]));
		}
		printf("%d\n", a);
	}
	else
	{
		printf("0\n");
	}
		return (0);
}
