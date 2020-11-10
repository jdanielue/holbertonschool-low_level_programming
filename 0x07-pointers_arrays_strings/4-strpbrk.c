#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - copies memory area.
 * @s: the address of memory to print
 * @accept: the source of the memory to print
 * Return: Nothing.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0' ; i++)
	{
		for (j = 0; *(accept + j) != '\0' ; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				s = (s + i);
				return (s);
			}
		}
	}
	return (NULL);

}
