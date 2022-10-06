#include "main.h"
#include <stdlib.h>

/**
 * _calloc -a function that allocates memory for an array
 *
 * @nmemb: array
 * @size: number of bytes
 *
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr = NULL;


	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}

