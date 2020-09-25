#include "holberton.h"

/**
 *more_numbers - print numbers of 0 to 9
 * @void: no parameter
 *
 * Return: not return
 **/
void more_numbers(void)
{
	int c;

	for (c = 0; c <= 14; c++)
	{
		if (c >= 10)
		{
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		else
		{
			_putchar(c + '0');
		}
	}
}
