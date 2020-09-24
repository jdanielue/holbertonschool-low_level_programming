#include <ctype.h>
#include "holberton.h"

/**
 *print_last_digit - progam return1 for alpha case
 *@n: Value of input
 *Return: 1 or 0
 *
 */

int print_last_digit(int n)
{
	int ld;
	if (n >= 0)
	{
		ld = n % 10;
	_putchar(48 + ld);
	}
	else
	{
		ld = (n % 10) * -1;
		_putchar(48 +ld);
	}
	return (ld);
}
