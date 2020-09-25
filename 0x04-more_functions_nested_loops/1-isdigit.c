#include "holberton.h"
#include <stdio.h>

/**
 *_isdigit - check if is a digit.
 *
 * Return: Always 1 or 0.
 *@c : int character
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 59)
	{
		return (1);
	}
	else
	return (0);
}
