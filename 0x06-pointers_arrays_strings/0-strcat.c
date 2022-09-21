#include "main.h"

/**
 *  _strcat -  function to concatenate strings
 *
 *  @dest: string to be appended to
 *  @src: string to be appended
 *
 *  Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, j, n;

	n = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	/* concatenate src to dest */
	for (i = n, j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
