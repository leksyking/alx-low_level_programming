#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 *
 * @n: number of times the diagonal  should be printed
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
}
