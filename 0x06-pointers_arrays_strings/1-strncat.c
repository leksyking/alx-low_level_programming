#include "main.h"

/**
 * _strncat - function that contenates two strings
 *
 * @dest: string to be appended to
 * @src: string to append
 * @n: number of bytes to append
 *
 * Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, m;

	for (m = 0; dest[m] != '\0'; m++);
	for (i = m, j = 0; j <= n - 1; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
