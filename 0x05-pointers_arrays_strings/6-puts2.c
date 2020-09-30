#include "holberton.h"

/**
 * puts2 - check the code for Holberton School students.
 * @str : just another variable
 * Return: No return.
 */
void puts2(char *str)
{
	int i, n;

	for (i = 0; str[i] != '\0';)
	{
		i++;
	}
	n = i - 1;

	for (i = 0; i <= n; i = i + 2)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
