#include "holberton.h"
#include <stdio.h>

/**
 * *_strchr - copies memory area.
 * @dest: the address of memory to print
 * @src: the source of the memory to print
 * @n: the size of the characters
 * Return: Nothing.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c )
		{
			return (s + i);
		}
	}
	return (NULL);
}
