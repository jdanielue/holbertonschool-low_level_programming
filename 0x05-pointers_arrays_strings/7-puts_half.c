#include "holberton.h"

/**
 * puts_half - check the code for Holberton School students.
 *@str :pointer's varible
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, n, l;

	for (i = 0; str[i] != '\0';)
	{
		i++;
	}
	n = i - 1;
	l = (n / 2);
	if (((n + 1) % 2) == 0)
	{
		l = (n / 2);
	}
	else
	{
		l = ((n + 2) / 2);
	}
	for (i = l; i <= n; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
