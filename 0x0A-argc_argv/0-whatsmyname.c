#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 *@argc:number of arguments
 *@argv: pointer array
 *Return: ALWAYS 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
