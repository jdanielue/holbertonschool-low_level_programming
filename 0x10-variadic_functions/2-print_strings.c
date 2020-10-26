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
	char *aux;
	va_list datos;

	va_start(datos, n);

	for (i = 0; i < n; i++)
	{
		aux = va_arg(datos, char*);
		if (aux == NULL)
		{
			printf("(nil)");
		}
		else
		{
			if (separator == NULL)
			{
			printf("%s", aux);
			}
			else if (i != n - 1)
			{
			printf("%s%s", aux, separator);
			}
			else
			{
			printf("%s", aux);
			}
		}
	}
	printf("\n");
}
