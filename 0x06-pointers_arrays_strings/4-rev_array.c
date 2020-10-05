#include "holberton.h"
#include <stdio.h>

/**
 *reverse_array - reverses the content of an array of integers
 *@a: variable
 *@n: variable
 *Return: No return
*/

void reverse_array(int *a, int n)
{
	int aaux[100];
	int i;

	for (i = 1; i < n; i++)
	{
		aaux[i] = a[i];
	}
	for (i = n; i >= 0; i--)
	{
		a[i] = aaux[n - i];
	}
}
