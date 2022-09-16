#include "main.h"

/**
 * print_triangle - function that prints triangle
 *
 * @size: parameter - size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i < size; i++)
		{
			j = 1;
			k = 1;
			while (j <= (size - i))
			{
				_putchar(' ');
				j++;
			}
			while (k <= i)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
		}
	}
}
