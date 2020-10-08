#include "holberton.h"

/**
 * factorial - function that prints the factorial
 *@n: factorial number
 * Return: No return.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
