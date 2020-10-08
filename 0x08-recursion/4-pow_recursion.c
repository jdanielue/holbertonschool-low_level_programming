#include  "holberton.h"
/**
 * _pow_recursion - returns the length of a string
 * @x: base
 * @y: power
 * Return: result
 */

int _pow_recursion(int x, int y)
{
int n;

if (y < 0)
{
	return (-1);
}
else if (y == 0)
{
	return (1);
}
else
{
	n = x * _pow_recursion(x, y - 1);
}
return (n);
}
