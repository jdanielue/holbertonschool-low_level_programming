#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * array_range - creates an array of integers.
 * @min: min number to print
 * @max: max number to print
 *
 * Return: integer
 */
int *array_range(int min, int max)
{
	int i, *p, n;

	n = 0;

	if (min > max)
		return (NULL);
	if (max >= min)
	{
		p = malloc(100);
	}
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		p[n] = n;
		n++;
	}
	return (p);
}
