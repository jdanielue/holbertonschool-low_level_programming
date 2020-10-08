#include "holberton.h"
int _help(int n, int x);
/**
 * _sqrt_recursion - returns the length of a string
 *@n: constant value to finde the natural square root
 *Return: _help
 *
 */

int _sqrt_recursion(int n)
{
	return (_help(n, 1));
}
/**
 *_help - helps to find the returns of the natural square root of a number.
 *@n: constant value to find the natural square root
 *@x: variable to find the natural root of n
 *Return: _help
 *
 */

int _help(int n, int x)
{
	int raizn;

	raizn =  x * x;
	if (raizn == n)
	{
	return (x);
	}
	else if (n > raizn)
	{
		return (_help(n, x + 1));
	}
	else
	{
		return (-1);
	}
}
