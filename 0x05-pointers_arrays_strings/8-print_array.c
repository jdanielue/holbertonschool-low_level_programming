#include "holberton.h"
#include <stdio.h>

/**
 * print_array - check the code for Holberton School students.
 *
 *@a : variable
 *@n : variable
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d", *(a + i));
		printf(", ");
	}
	for (i = (n - 1); i <= (n - 1); i++)
	{
		printf("%d", *(a + i));
	}
	putchar('\n');
}
