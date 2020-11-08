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
	int aux[1000], i;

	for (i = 0; i  < n; i++)
	{
		aux[i] = *(a + i);
	}
	i = i - 1;

		while (i >= 0)
		{
			a[(n - 1) - i] = aux[i];
			i--;
		}


}
