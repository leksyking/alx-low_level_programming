#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function
 * as a parameter on each element of an array
 *
 * @array: array
 * @size: array size
 * @action: pointer function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
		action(array[i]);
}
