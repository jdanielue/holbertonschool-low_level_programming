#include "holberton.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 *@s: string
 * Return: No return.
 */

void _puts_recursion(char *s)
{
	if (*(s) != '\0')
	{
		_puts_recursion(s + 1);
		_putchar(*(s));
	}
}
