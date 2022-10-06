#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array
 *
 * @min: where array should start
 * @max: where array should end
 *
 * Return: nothing
 */
int *array_range(int min, int max)
{
	int val, i, *ptr;

	if (min > max)
		return (NULL);
	val = (max - min) + 1;
	ptr = malloc(sizeof(int) * val);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < val; i++)
		ptr[i] = min;
		min++;
	return (ptr);
}
