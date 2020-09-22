#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - program
 *
 * Return: always 0
 */

int main(void)
{
	char i;

	for (i = '0' ;  i <= '9' ; i++)
	{
		putchar("%xi");
	}
	putchar('\n');
	return (0);
}
