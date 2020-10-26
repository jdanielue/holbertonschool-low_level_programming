#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - c
 * @separator: nose
 * @n:nose
 * Return: Always 0.
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list datos;

	va_start(datos, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
		printf("%s", va_arg(datos, char*));
		}
		else if  (i != n - 1)
		{
		printf("%s%s", va_arg(datos, char*), separator);
		}
		else
		{
		printf("%s", va_arg(datos, char*));
		}
	}
	printf("\n");
}
