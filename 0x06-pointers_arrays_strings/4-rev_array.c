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
	int aaux[1000];
	int i;

	for (i = 0; i < n; i++) /* porque no me entra al ciclo cuando escribo a[i] != '\0'  */
	{
		aaux[i] = a[i];
	}
	for (i = n; i > 0; i--)
	{
		a[i - 1] = aaux[n - i];
	}
}
