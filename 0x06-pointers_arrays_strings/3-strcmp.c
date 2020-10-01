#include "holberton.h"
#include <stdio.h>

/**
 *_strcmp - check the code for Holberton School students.
 *@s1: variable
 *@s2: variable
 * Return: Always m.
 */
int _strcmp(char *s1, char *s2)
{
	int m, i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			m = s1[i] - s2[i];
		return (m);
		}
		else if (s1[i] < s2[i])
		{
		m = (s1[i] - s2[i]);
		return (m);
		}
		else if (s1[i] > s2[i])
		{
		m = (s1[i] - s2[i]);
		return (m);
		}
	}
	return (0);
}
