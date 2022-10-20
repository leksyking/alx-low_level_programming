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
<<<<<<< HEAD
	unsigned int i, x;
	va_list(args);

	
=======
	va_list args;
	unsigned int i, x;

>>>>>>> b4107e20bbd346700ef3ddb45d2e830e1eccce5f
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, unsigned int);
		if (i != (n - 1) && separator != NULL)
		{
			printf("%d%s", x, separator);
		}
		else
		{
			printf("%d", x);
		}
	}
	va_end(args);
	printf("\n");
}
