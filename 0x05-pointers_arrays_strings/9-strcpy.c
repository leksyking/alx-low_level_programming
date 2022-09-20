#include "main.h"

/**
 * _strcpy - function that copies string
 *
 * @dest: destination
 * @src: source
 *
 * Return: the destination
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
