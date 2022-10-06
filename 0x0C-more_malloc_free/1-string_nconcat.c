#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat -a function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to copy from s2
 *
 * Return: the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int m, k, i, j = 0, l;
	char *ptr;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	m = strlen(s1);
	k = strlen(s2);
	if (n >= k)
		l = m + k;
	else if (n < k)
		l = m + n;
	ptr = malloc(sizeof(char) * l + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		if (i < m)
		{
			ptr[i] = s1[i];
		}
		if (i >= m)
		{
			ptr[i] = s2[j];
			j++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
