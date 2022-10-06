#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - function that creates an array
 *
 * @min: where array should start
 * @max: where array should stop
 *
 * Return: array
 */
int *array_range(int min, int max)
{
	int i, *ptr, val;

	if (min > max)
		return (NULL);
	val = (max - min) + 1;
	ptr = malloc(sizeof(int) * val);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= max; i++)
		ptr[i] = min;
		min++;
	return (ptr);
}
