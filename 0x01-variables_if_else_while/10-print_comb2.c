#include <stdio.h>

/**
 * main - program that prints the numbers from 00 to 99
 * Return: zero
 *
*/

int main(void)
{
	int i, n, r = 0;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 9; n++)
		{
		putchar(i + 48);
		putchar(n + 48);
		r++;
		if (r % 24 == 0 || r == 100)
		{
			putchar('\n');
		}
		if (r != 100)
		{
		putchar(',');
		putchar(32);
		}
		}
	}
	return (0);
}
