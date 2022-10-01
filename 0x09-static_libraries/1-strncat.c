#include "main.h"

/**
 * _strncat - function that concatenates strings
 *
 * @dest: string to append to
 * @src: string to append
 * @n: number of bytes
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, m;

	for (m = 0; dest[m] != '\0'; m++)
	{
	}
	for (i = m, j = 0; j < n; i++, j++)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
			j = n;
	}
	return (dest);
}
