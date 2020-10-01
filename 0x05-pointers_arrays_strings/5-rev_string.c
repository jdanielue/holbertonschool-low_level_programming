#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, c;
	char saux[100];
	for (i = 0; s[i] != '\0'; i++)
	{
	}
	c = i;
	for (i = c; i >= 0; i--)
	{
		saux[c-i] = s[i];
	}
}
