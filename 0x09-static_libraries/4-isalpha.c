#include <ctype.h>
#include "holberton.h"

/**
 *_isalpha - progam return1 for alpha case
 *@c: Value of input
 *Return: 1 or 0
 *
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	{
		return (0);
}
}
