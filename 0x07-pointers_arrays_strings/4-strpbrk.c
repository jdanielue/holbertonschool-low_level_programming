#include "holberton.h"
#include <stdio.h>

/**
 * *_strchr - copies memory area.
 * @s: the address of memory to print
 * @accept: the source of the memory to print
 * Return: Nothing.
 */

char *_strpbrk(char *s, char *accept)
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
