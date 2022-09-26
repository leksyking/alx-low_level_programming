#include "main.h"

/**
 * _memset - a function that fills memory with constant type
 *
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes of the memory
 *
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
