#include "holberton.h"
#include <stdio.h>

/**
 * *_strcpy - check the code for Holberton School students.
 *@dest : destination pointer
 *@src : source pointer
 * Return: Always dest
 */
char *_strcpy(char *dest, char *src)
{
	int c, i;

	for (i = 0; src[i] != '\0'; i++)
	{
	}
	c = i;

	for (i = 0; i <= c; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
