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

	for (i = 'z' ; i >= 'a' ; i--)
	{
		putchar(i);
	}
	putchar('\n');
return (0);
}
