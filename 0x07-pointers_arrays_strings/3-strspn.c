#include "holberton.h"
#include <stdio.h>

/**
 * *_strspn - copies memory area.
 * @s: the address of memory to print
 * @accept: the source of the memory to print
 * Return: Nothing.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int i, n;

	for (n = 0; *(s + n) != ' '; n++)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*(s + n) == *(accept + i))
			{
				a++;
			}
		}
	}
	return (a);
}
