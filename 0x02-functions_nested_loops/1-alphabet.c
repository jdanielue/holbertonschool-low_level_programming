#include "holberton.h"
#include <stdio.h>

/**
 *print_alphabet - program
 *return: 0
 *
*/

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
