#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialising variable struct dog
 * @d: the struct
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
			return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
