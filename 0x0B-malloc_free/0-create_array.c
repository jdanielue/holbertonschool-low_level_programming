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

	if (size == 0)
	{
		return (NULL);
	}
	m = malloc(size);
	if (m == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		m[n] = c;
	}
	return (m);
}
