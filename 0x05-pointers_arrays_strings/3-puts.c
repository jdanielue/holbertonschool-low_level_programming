#include "holberton.h"
#include <unistd.h>

/**
 *_puts - prints a string, followed by a new line
 *@a : variable to store the string
 * Return: No return
 */

void _puts(char *a)
{
       int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		_putchar(a[i]);
	}
_putchar ('\n');
}
