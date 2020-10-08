#include "holberton.h"

/**
 * _print_rev_recursion - function that prints a reverse string
 *@s: string
 * Return: No return.
 */

void _print_rev_recursion(char *s)
{
	if (*(s) != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*(s));
	}
}
