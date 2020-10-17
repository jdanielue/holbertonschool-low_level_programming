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
	unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < nmemb * size; n++)
	{
		p[n] = 0;
	}
	return (p);
}
