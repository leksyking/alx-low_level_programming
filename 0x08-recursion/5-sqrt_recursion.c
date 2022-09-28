#include "main.h"

/**
 * squaret - function to check for the square root
 *
 * @i: number
 * @j: number to use to check for square root
 *
 * Return: square root
 */
int squaret(int i, int j)
{
	if (j * j == i)
		return (j);
	else if (j * j > i)
		return (-1);
	return (squaret(i, j + 1));
}


/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 *
 * @n: number
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (squaret(n, 1));
}
