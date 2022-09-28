#include "main.h"

/**
 * prime - check the number
 *
 * @a: number to be checked
 * @b: number to check with
 *
 * Return: 1 or 0
 */
int prime(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 2)
		return (0);
	return (prime(a, b + 1));
}

/**
 * is_prime_number - function that checks for prime numbers
 *
 * @n: number parameter
 *
 * Return: 0 if not a prime number and 1 if number is prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
