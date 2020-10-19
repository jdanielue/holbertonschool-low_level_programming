#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * length - check the code for Holberton School students.
 *@s: imput 1
 * Return: Always something.
 */

int length(char *s)
{
	int z;

	for (z = 0; s[z] != '\0';)
	{
		z++;
	}
	return (z);
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
	unsigned int i = 0, j = 0, m = 0, t = 0;
	char *p;

	j = length(s2);
	i = length(s1);
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	j = length(s2);
	i = length(s1);
	if (n < j)
	{
		j = n;
	}
	p = malloc(j + i + 1);
	if (p == NULL)
		return (NULL);
	for (m = 0; m < i; m++)
	{
		p[m] = s1[m];
	}
	for (t = 0; t < j && s2 != '\0'; t++)
	{
		p[t + m] = s2[t];
	}
	p[t + m] = '\0';
	return (p);
}
