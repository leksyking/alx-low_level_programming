#include <stdio.h>

/**
 * print_to_98 - function to print from n t0 98
 *
 * @n: argument
 *
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d, ", i);
	}
}
