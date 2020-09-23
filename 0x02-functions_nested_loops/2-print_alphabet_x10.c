#include "holberton.h"
#include <stdio.h>

/**
 *print_alphabet_x10 - program
 *return: 0
 *
*/

void print_alphabet_x10(void)
{
	char i, j;

	for (j = 0 ; j <= 9 ; j++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
		{
		_putchar(i);
		}
	_putchar('\n');
	}
}
