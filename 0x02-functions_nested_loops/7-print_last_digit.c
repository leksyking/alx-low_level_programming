#include "main.h"
/**
 * print_last_digit - function to print the last digit
 *
 * @l: number to be passed as argument
 * Return: the last digit og the number
 */
int print_last_digit(int l)
{
	int i;

	i = l % 10;
	if (i < 0)
		i *= -1;
	_putchar(i + '0');
	return (i);
}
