#include "holberton.h"

/**
 * _strlen_recursion - function that prints a reverse string
 *@s: string
 * Return: No return.
 */

int _strlen_recursion(char *s)
{
	if (*(s) != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
	{
		return (0);
	}
}
