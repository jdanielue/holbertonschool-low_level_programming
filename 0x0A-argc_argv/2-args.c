#include <stdio.h>
#include "holberton.h"


/**
 * main - program that multiplies two numbers
 *@argc:number of arguments
 *@argv: pointer array
 *Return: ALWAYS 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
