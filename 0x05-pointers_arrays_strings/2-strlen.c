#include "holberton.h"
#include <stdio.h>

/**
 * main - returns the length of a string.
 *
 * Return: No return
 */
int _strlen(char *s)
{
	int i;
	for (i = 0; s[i] != '\0';)
	{
	i++;
	}
	return (i);
}
