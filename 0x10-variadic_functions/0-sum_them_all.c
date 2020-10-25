#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - check the code for Holberton School students.
 * @n :number of elements
 * Return: Always 0.
 */


int sum_them_all(const unsigned int n, ...)
{

int val = 0;
va_list ad;
unsigned int i;

va_start(ad, n);
for (i = 0; i < n; i++)
	{
	val += va_arg(ad, int);
	}
va_end(ad);

return (val);
}
