#include <ctype.h>
#include "holberton.h"

/**
 *times_table - progam return1 for alpha case
 *Return: 0
 */

void times_table(void)
{
	int i, n, resultado, cociente, residuo;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (n = 0; n <= 9; n++)
		{
		resultado = i * n;
		if (resultado >= 10 && n < 9)
		{
			residuo = resultado % 10;
			cociente = resultado / 10;
			_putchar(cociente + '0');
			_putchar(residuo + '0');
			_putchar(',');
			_putchar(32);
		}
		if (resultado >= 10 && n == 9)
		{
			residuo = resultado % 10;
			cociente = resultado / 10;
			_putchar(cociente + '0');
			_putchar(residuo + '0');
			_putchar('\n');
		}
		if (resultado < 10 && n < 9 && n != 0)
		{
			_putchar(32);
			_putchar(resultado + '0');
			_putchar(',');
			_putchar(32);
		}
		if (resultado < 10 && n < 9 && n == 0)
		{
			_putchar(resultado + '0');
			_putchar(',');
			_putchar(32);
		}
		if (resultado < 10 && n == 9)
		{
			_putchar(32);
			_putchar(resultado + '0');
			_putchar('\n');
		}
		}
	}
}
