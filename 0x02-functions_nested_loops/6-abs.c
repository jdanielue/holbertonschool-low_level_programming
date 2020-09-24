#include <ctype.h>
#include "holberton.h"

/**
 *_abs - progam return1 for alpha case
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
