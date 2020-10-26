#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - c
 * @format: nose
 * Return: Always 0.
 */


void print_all(const char * const format, ...)
{

int n;

va_list datos;
va_start (datos, format);

n = 0;
while (format[n] != '\0')
{
	if (n == 0)
	{
		switch (*(format + n))
	{
	case 'c':
		printf("%c", va_arg(datos, int));
		break;
	case 'i':
		printf("%d", va_arg(datos, int));
		break;
	case 'f':
		printf("%f", va_arg(datos, double));
		break;
	case 's':
		printf("%s", va_arg(datos, char*));
		break;
	default:
		break;
	}
	}
	if (n != 0)
	{
		switch (*(format + n))
	{
	case 'c':
		printf(", %c", va_arg(datos, int));
		break;
	case 'i':
		printf(", %d", va_arg(datos, int));
		break;
	case 'f':
		printf(", %f", va_arg(datos, double));
		break;
	case 's':
		printf(", %s", va_arg(datos, char*));
		break;
	default:
		break;
	}
	}
	n++;
}
printf("\n");
va_end (datos);


}
