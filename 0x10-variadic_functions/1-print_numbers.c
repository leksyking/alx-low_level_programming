#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers
 *
 * @separator: string to be printed betweem numbers
 * @n: number of integers
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;
	va_list args;
	
	va_start(args, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			if (separator != NULL || n != 0)
			{
				x = va_arg(args, unsigned int);
				if (i != (n - 1))
				{
					printf("%d%s", x, separator);
				}
				else
				{
					printf("%d", x);
				}
			}
		}
	}
	printf("\n");
}
