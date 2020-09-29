#include "holberton.h"
#include <stdio.h>

/**
 *swap_int - swaps the values of two integers
 *@a : variable that needs to change
 *@b : variable that needs to change
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
