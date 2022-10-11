#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - a function that frees dogs
 *
 * @d: dog structure
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
