#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * str_concat - function that returns a pointer
 * @s1: first text
 * @s2: second text
 * Return: t.
 */
char *str_concat(char *s1, char *s2)
{

	int i, n, j, k;
	char *t;

	if (s1 == NULL)
	       s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (n = 0; s2[n] != '\0'; n++)
	{
	}
	t = malloc(n + i + 1);
	if (t == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		t[j] = s1[j];
	}
	for (k = 0; k < n; k++)
	{
		t[j + k] = s2[k];
	}
	t[j + k] = '\0';
	return (t);
}
