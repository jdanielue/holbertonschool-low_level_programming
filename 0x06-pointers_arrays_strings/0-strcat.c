#include "holberton.h"
#include <stdio.h>

/**
 * *_strcat - check the code for Holberton School students.
 * @dest: source information
 * @src: destination information
 * Return: Always 0.
 */


char *_strcat(char *dest, char *src)
{
	int i, n, m;

	for (m = 0; dest[m] != '\0'; m++)
	{
	}
	for (n = 0; src[n] != '\0'; n++)
	{
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
	dest[m + i] = src[i];
	}
	return (dest);
}
