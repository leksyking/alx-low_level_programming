#include "main.h"

/**
 * times_table -  function name
 *
 * Return: Always 0
 */
void times_table(void)
{
	int i, j, product;

	while (i < 10)
	{
		for (j = 1; j < 10; j++)
		{
			product = i * j;
			_putchar(',');
			_putchar(' ');
			if (product < 10)
			{
				_putchar(' ');
				_putchar(product % 10 + '0');
			}
			else 
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
		}
		_putchar('\n');
		i++;
	}
}
