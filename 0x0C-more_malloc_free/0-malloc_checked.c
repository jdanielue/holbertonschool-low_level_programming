#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - check the code for Holberton School students.
 *
 * Return: no return.
 */
void *malloc_checked(unsigned int b)
{
	void *l;

	l =  malloc (b);
	if ( l == NULL)
	{
	exit(98);
	}
	return (l);
}
