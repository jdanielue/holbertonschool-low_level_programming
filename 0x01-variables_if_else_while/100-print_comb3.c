#include <stdio.h>

/**
 * main - program that prints the numbers from 00 to 99
 * Return: zero
 *
*/

int main(void)
{
	int i, n;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			if (i < n)
			{
				putchar(i + 48);
				putchar(n + 48);
				if (i != 8)
				{
				putchar(',');
				putchar(32);
				}
			}
			else
			{
			}
		}
	}
	putchar('\n');
	return (0);
}
