#include "holberton.h"
#include <stdio.h>

/**
 * *_memcpy - copies memory area.
 * @dest: the address of memory to print
 * @src: the source of the memory to print
 * @n: the size of the characters
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
