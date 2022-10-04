#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - a function that concatenates two strings
 *
 * @s1: first dtring params
 * @s2: second string params
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *ch;
	int i, m, n, l, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	m = strlen(s1);
	n = strlen(s2);
	l = m + n;
	ch = malloc((sizeof(char) * l) + 1);
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		if (i < m)
		{
			ch[i] = s1[i];
		}
		if (i >= m)
		{
			ch[i] = s2[j];
			j++;
		}
	}
	ch[i] = '\0';
	return (ch);
}
