#include <stdio.h>

/*
 *main - hexa numbers
 *Return: 0
*/

int main(void)
{
	int i;

	i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
	i++;
	}
	while (i <= 16)
	{
		putchar(i + 87);
	i++;
	}
	putchar('\n');
	return (0);
}