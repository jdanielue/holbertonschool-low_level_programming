#include "holberton.h"

/**
 *print_rev - prints a string, followed by a new line
 *@s : variable to store the string
 *Return : return void
 */

void print_rev(char *s)
{
	int i, n;

	for (n = 0; s[n] != '\0'; n++)
	{
	}
	for (i = n; i >= 0; i--)
	{
		_putchar(s[i]);
	}
_putchar ('\n');
}
