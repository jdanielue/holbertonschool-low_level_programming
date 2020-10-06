#include "holberton.h"
#include <stdio.h>

/**
 * *_strchr - copies memory area.
 * @s: the address of memory to print
 * @c: the source of the memory to print
 * Return: Nothing.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return (NULL);
}
