#include <ctype.h>
#include "holberton.h"

/**
 *jack_bauer - progam return1 for alpha case
 *
 *Return: 1 or 0
 *
 */

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0 ; i <= 2 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			for (k = 0 ; k <= 5 ; k++)
			{
				for (l = 0 ; l <= 9 ; l++)
				{
					if (i == 2 && j == 4 && k == 0 && l == 0)
					{
						return;
					}
					else
					{
						_putchar(i + '0');
						_putchar(j + '0');
						_putchar(':');
						_putchar(k + '0');
						_putchar(l + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
