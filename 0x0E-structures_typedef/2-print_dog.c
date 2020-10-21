#include <stdio.h>
#include "dog.h"

/**
 * print_dog - c function that prints a struct dog
 * @d: pointer to dog structure
 * Return: Always void.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	}
	else
	{
	if (d->name == NULL)
	printf("(nil)\n");
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (&(d->age) == NULL)
	printf("(nil)\n");
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
	printf("(nil)\n");
	else
	{
	printf("Owner: %s\n", d->owner);
	}
	}
}
