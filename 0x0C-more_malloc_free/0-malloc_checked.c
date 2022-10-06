#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 *
 * @b: int parameter
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void  *ptr = NULL;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
