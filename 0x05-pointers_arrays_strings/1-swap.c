#include "holberton.h"
#include <stdio.h>

/**
 * main - swaps the values of two integers
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
