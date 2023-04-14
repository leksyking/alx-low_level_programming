#include "search_algos.h"

/**
 * linear_search - a function that searches for a value
 *  in an array of integers using the Linear search algorithm
 *
 * @array: array to be searched
 * @size: size of the array
 * @value: value to search in the array
 *
 * Return: the first index where the value is located else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t n;

	if (array == NULL)
	{
		return (-1);
	}
	for (n = 0; n < size; n++)
	{
		printf("Value checked array[%li] = [%i]\n", n, array[n]);
		if (array[n] == value)
			return (n);
	}

	return (-1);
}
