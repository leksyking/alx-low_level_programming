#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function that initializes a variable of
 * type struct dog
 *
 * @d: structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (0);
}
