#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - prints a name as is
 * @array: array
 * @size: size of array
 * @cmp: pointer to a function
 *
 * Return: Nothing.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i, v;

	if (cmp == NULL)
		return (-1);
	if (array == NULL)
		return (-1);
	if (size <= 0)
	return (-1);
	for (i = 0; i < size; i++)
	{
		v = cmp(array[i]);
		if (v != 0)
		{
			return (i);
		}
	}
	return (-1);
}
