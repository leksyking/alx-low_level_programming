#include "main.h"

/**
 * print_sign - function to print sign
 *
 * @n: argument passed to check its value
 * Return: 1 if more than 0, 0 if 0 and -1 if less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
