#include <stdio.h>
#include "dog.h"

/**
 * init_dog - c function that initialize a variable of type struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog's owner
 * @d: pointer to dog structure
 * Return: Always void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->owner = owner;
		d->age = age;
		(*d).name = name;
	}
}
