#include <ctype.h>
#include "holberton.h"

/**
 *int _abs(int) - progam return1 for alpha case
 *@n: Value of input
 *Return: 1 or 0
 *
 */

int _abs(int n)
{
	int positive;
	positive = n * (-1);

	if (n < 0)
	{
		n = positive;
			}
	else
	{
	return (n);
	}
	return (positive);
}
