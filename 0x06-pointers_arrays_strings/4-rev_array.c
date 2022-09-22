#include "main.h"

/**
 * reverse_array - function that reverses array of n integers
 *
 * @a: array
 * @n: number of arrays
 */
void reverse_array(int *a, int n)
{
	int x = 0, z;

	n = n - 1;
	while (x <= n)
	{
		z = a[x];
		a[x++] = a[n];
		a[n--] = z;
	}
}
