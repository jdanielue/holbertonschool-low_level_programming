#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

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

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (n >= j)
		p = malloc(j + n);
	else
		p = malloc(i + j);
	printf("i %d, j %d, i + j %d, n%d \n", i, j, i + j, n);
	for (m = 0; s1[m] != '\0'; m++)
	{
		p[m] = s1[m];
	}
	for (t = 0; s2[t] != '\0'; t++)
	{
	p[t+m] = s2[t];
	}
	return (p);
}
