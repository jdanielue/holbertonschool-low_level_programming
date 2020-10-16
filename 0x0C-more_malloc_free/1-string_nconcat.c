#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * length - check the code for Holberton School students.
 *@s: imput 1
 * Return: Always str.
 */

int length(char *s)
{
	int i, str;

	for (i = 0; s[i] != '\0'; i++)
	{
		str++;
	}
	return (str);
}


/**
 * string_nconcat - check the code for Holberton School students.
 *@s1: imput 1
 *@s2: imput 2
 *@n: size of imput comparation
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, m, t;
	char *p;

	i = length(s1);
	j = length(s2);

	if (n >= j)
	{
		n = j;
		p = malloc(300);
	}
	else
	{
		p = malloc(300);
	}
	for (m = 0; m < i; m++)
	{
		p[m] = s1[m];
	}
	for (t = 0; t < n; t++)
	{
	p[t + m] = s2[t];
	}
	return (p);
}
