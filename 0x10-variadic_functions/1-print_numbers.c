#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - c
 * @separator: nose
 * @n:nose
 * Return: Always 0.
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int a[n];
	va_list datos;

	va_start(datos, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
		a[i] = va_arg(datos, int);
		printf("%d",  a[i]);
		}
		else if  (i != n - 1)
		{
		a[i] = va_arg(datos, int);
		printf("%d%s",  a[i], separator);
		}
		else
		{
		a[i] = va_arg(datos, int);
		printf("%d",  a[i]);
		}
	}
	printf("\n");
}
