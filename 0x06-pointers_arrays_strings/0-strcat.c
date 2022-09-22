#include "main.h"

/**
 * _strcat - function to concatenate strings
 *
 * @dest: string to be appended to
 * @src: string to append
 *
 * Return: concatenated String
 */
char *_strcat(char *dest, char *src)
{
	int i, j, n;

	n = 0;
	while (n != '\0')
	{
		n++;
	}
	for (i = n, j = 0; src[j] = '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
