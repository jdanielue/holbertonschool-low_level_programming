#include "holberton.h"

/**
 *print_most_numbers - print numbers of 0 to 9
 * @void: no parameter
 *
 * Return: not return
 **/
void print_most_numbers(void)
{
	int c;
	for (c = 0; c <= 3; c++)
	{
		if (c != 2)
		_putchar(c + '0');
	}
	for (c =5; c < 10; c++)
	{
                _putchar(c + '0');
	}
	_putchar('\n');
}
