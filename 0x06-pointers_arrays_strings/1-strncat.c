#include "holberton.h"
#include <stdio.h>

/**
 * *_strncat - check the code for Holberton School students.
 * @dest: source information
 * @src: destination information
 *@n: variable size
 *Return: Always 0.
 */


char *_strncat(char *dest, char *src, int n)
{
	int i, m;

	for (m = 0; dest[m] != '\0'; m++)
	{
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
	dest[m + i] = src[i];
	}
	return (dest);
}
