#include "holberton.h"

/**
 *print_numbers - print numbers of 0 to 9
 * @void: no parameter
 *
 * Return: not return
 **/
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
