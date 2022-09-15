#include "main.h"

/**
 * more_numbers - function to print from 0 to 14 10 times
 *
 */
void more_numbers(void)
{
	int i, j, r;

	j = 0;
	while (j < 10)
	{
		for (i = 0; i < 15; i++)
		{
			r = i;
			if (i > 9)
			{
				r = i % 10;
				_putchar('1');
			}
			_putchar('0' + r);
		}
		_putchar('\n');
		j++;
	}
}
