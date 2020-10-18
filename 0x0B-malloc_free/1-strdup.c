#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _strdup - returns a pointer to a newly allocated space.
 * @str: the address of memory to print
 *
 * Return: t.
 */
char *_strdup(char *str)
{
	char *t;
	int n, j;

	if (str == NULL)
		return (NULL);


	for (n = 0; str[n] != '\0'; n++)
	{
	}
	n = n + 1;
	t = malloc(n * sizeof(char));
	if (t == NULL)
		return (NULL);
	for (j = 0; j < n; j++)
	{
		t[j] = str[j];
	}
return (t);
}
