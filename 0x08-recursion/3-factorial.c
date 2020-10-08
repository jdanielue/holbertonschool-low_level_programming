#include "holberton.h"

/**
 * _strlen_recursion - function that prints a reverse string
 *@s: string
 * Return: No return.
 */
int factorial(int n)
{
	if ( n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial (n - 1));
	}
}
