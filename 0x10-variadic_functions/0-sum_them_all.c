#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all
 * its parameters
 *
 * @n: first parameter
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i, x, sum = 0;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < args; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return (sum);
}
