#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - we are freeing the allocations
 * @d: the pointer to the struct
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
