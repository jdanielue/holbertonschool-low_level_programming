#include <ctype.h>
#include "holberton.h"

/**
 *_isalpha - progam return1 for alpha case
 *@c: Value of input
 *Return: 1 or 0
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1)
			} else if (n == 0)
	{
		_putchar('0');
	return (0)
			}else
	{
		_putchar('-');
		return (-1)
			}
}
