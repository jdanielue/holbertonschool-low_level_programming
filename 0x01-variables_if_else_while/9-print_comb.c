#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0
*/

int main(void)
{
	int i;


	for (i = 1; i <= 9; i++)
	{
		putchar(',');
		putchar(32);
		putchar(i + 48);
	}
	putchar('\n');
	return (0);
}
