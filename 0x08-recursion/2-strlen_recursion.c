#include "holberton.h"

/**
 * _strlen_recursion - function that prints a reverse string
 *@s: string
 * Return: No return.
 */

int _strlen_recursion(char *s)
{
	int i;
	if (*(s) != '\0')
	{
		_strlen_recursion(s + 1);
	}
	return(i);
}
