#include "main.h"

/**
 * reverse_array - function to reverse array
 *
 * @a: array
 * @n:number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i >= 0)
	{
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar(a[i] + '0');
		i--;
	}
	_putchar('\n');
}
