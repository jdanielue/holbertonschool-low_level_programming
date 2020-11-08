#include "holberton.h"
#include <stdio.h>
int largo(char *cadena);
/**
 * largo - size of string.
 * @cadena: string
 * Return: size of string.
 */
int largo(char *cadena)
{
int n = 0;

for (n = 0; *(cadena + n) != '\0'; n++)
	;
return (n);
}
/**
 * rev_string - check the code for Holberton School students.
 * @s: string
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, c, a = 0;

	char copy[1000];

	c = largo(s) - 1;
	for (i = 0; i <= c; i++)
	{
		a++;
		copy[i] = s[i];
	}

	for (i = 0; i <= c; i++)
	{
		s[i] = copy[c - i];
	}
}
