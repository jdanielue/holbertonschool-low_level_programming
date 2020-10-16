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
	char *p  ;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);
	p = malloc(nmemb * size);

	if (!p)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		*(p   + i) = 0;
	}
	return (p  );
}
