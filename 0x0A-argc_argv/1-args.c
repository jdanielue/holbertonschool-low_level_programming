#include <stdio.h>
#include "holberton.h"


/**
 * main - prints its name, followed by a new line.
 *@argc:number of arguments
 *@argv: pointer array
 *Return: ALWAYS 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc - 1;)
	{
		if (argv[i] != NULL)
			i++;
	}
	printf("%d\n", i);
	return (0);
}
