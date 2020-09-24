#include <ctype.h>
#include "holberton.h"

/**
 *times_table - progam return1 for alpha case
 *
 *Return: 0
 *
 */

void times_table(void)
{
	int i, n;

	for (i = 0 ; i <= 9 ; i++)
	{
		n = i * 9;
		_putchar(n + '0');
		_putchar('\n');
	}
}
