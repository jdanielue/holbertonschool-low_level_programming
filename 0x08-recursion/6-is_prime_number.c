#include "holberton.h"

int primo(int n, int x);
/**
 * is_prime_number - returns the length of a string
 * primo - function that helps to find the prime number
 *@n: constant value to finde the natural square root
 *Return: _help
 *
 */

int is_prime_number(int n)
{
	return (primo(n, 1));
}
int primo(int n, int x)
{
	int prueba;

	prueba = n % x;
	if (x >= n)
		return (1);
	else if (prueba == 0 && x != 1)
		return (0);
	else
		return (primo(n, x + 1));
}
