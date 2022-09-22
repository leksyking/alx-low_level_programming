#include "main.h"

/**
 * _strcat - function that concatenates strings
 *
 * @dest: string to be appended to
 * @src: string to append
 *
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, j, n;

	for (n = 0; dest[n] != '\0'; n++);
	for (i = n, j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
