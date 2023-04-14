#include "search_algos.h"

/**
 * binary_search - a function that searches for a value
 *  in a integer array of integers using the binary search algorithm
 *
 * @array: array to be searched
 * @size: size of the array
 * @value: value to search in the array
 *
 * Return: the first index where the value is located else -1
 */

int binary_search(int *array, size_t size, int value)
{
	int l, m, h;
	int n;

	if (array == NULL)
		return (-1);
	l = 0;
	h = size - 1;

	while (l <= h)
	{
		m = (l + h) / 2;

		printf("Searching in array: ");
		for (n = l; n <= h; n++)
			printf("%i%s", array[n], n == h ? "\n" : ", ");

		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			h = m - 1;
		else
			return (m);
	}

	return (-1);
}
