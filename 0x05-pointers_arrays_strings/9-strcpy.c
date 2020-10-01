#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int c, i;

	for (i = 0; src[i] != '\0' ;i++ )
	{
		c = i;
	}
	c = c +1;
	for (i = 0; i <= c; i++)
		{
			dest[i] = src[i];
		}
	return (dest);
}
