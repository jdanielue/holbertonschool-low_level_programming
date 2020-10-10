#include <ctype.h>
#include "holberton.h"

/**
 *_islower - progam return1 for lower case
 *@c: Value of input
 *Return: 1 or 0
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
}
}
