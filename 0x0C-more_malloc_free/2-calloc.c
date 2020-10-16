#include "holberton.h"
#include <stdlib.h>

/**
 *_calloc-function that allocates memory for an array, using malloc
 *@size: size
 *@nmemb: amount of elements
 *
 *Return: Null or other thing
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	p = calloc(nmemb, size);
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
