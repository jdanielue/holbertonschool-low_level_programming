#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - prints buffer in hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	char *t;
	int n, j;

	for (n = 0; str[n] != '\0'; n++)
	{
	}
	if (n <= 0)
	{
		return (NULL);
	}
	n = n + 1;
	t= malloc(n);
	if (t == NULL)
		return (NULL);
	for (j = 0; j <= n; j++)
	{
		t[j] = str[j];
	}
return (t);
}
