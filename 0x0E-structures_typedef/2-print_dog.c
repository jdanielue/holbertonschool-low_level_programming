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
	printf(" ");
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
	if (d->name == NULL)
	printf("(nil)");
	if (d->owner == NULL)
	printf("(nil)");
}
