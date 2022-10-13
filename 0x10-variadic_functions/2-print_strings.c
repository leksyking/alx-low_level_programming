#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints numbers
 *
 * @separator: string to be printed betweem strings
 * @n: number of strings
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
  char x;
	va_list args;
	
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			x = va_arg(args, char);
      if (x == NULL)
      {
        x = (nil);
      }
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
	va_end(args);
	printf("\n");
}
