#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 *
 * @d: dog structure
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %f\n", d->age);
	if (d->owner == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->owner);

}

