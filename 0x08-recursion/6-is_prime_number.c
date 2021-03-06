#include "holberton.h"
/**
 * is_prime_number - returns the length of a string
 * @n: constant value to finde the natural square root
 * @x: variable that help to find primes number
 * Return: _help
 *
 */

int primo(int n, int x);


int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (primo(n, 1));
	}
}
/**
 * primo - function that helps to find the prime number
 * @n: constant value to finde the natural square root
 * @x: variable that help to find primes numbers
 * Return: _help
 *
 */
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
