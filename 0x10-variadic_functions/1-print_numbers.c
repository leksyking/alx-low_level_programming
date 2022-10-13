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
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (separator == NULL || n == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, unsigned int);
		if (i != (n - 1))
		{
			printf("%d%c", x, separator);
		}
		else
		{
			printf("%d", x);
		}
	}
	printf("\n");
}
