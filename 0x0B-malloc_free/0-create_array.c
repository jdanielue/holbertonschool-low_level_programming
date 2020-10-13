#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - prints buffer in hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *m;
	unsigned int n;

	m = malloc(size);
	if (size <= 0)
	{
		return (NULL);
	}
	if (size > 0)

		for (n = 0; n < size; n++)
		{
			m[n] = c;
		}
	return (m);
}
