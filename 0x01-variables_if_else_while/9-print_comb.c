#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0
*/

int main(void)
{
	int i;

	i = 0;

	while (i <= 9)
	{
		putchar(i + 48);
		if (i < 9)
		{
		putchar(',');
		putchar(32);
		}
	i++;
	}
	putchar('\n');
	return (0);
}
