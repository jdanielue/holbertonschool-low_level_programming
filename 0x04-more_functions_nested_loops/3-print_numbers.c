#include "holberton.h"
#include <stdio.h>

/**
 *print_most_numbers - check if is a digit.
 *
 * @c : integer
 *
 *
 */

void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9 && c != 2 && c != 4; c++);
	{
		_putchar(c);
	}
}
