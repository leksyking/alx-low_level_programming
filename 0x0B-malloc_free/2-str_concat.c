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
	int i, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ch = malloc((sizeof(char) * (strlen(s1) + strlen(s2))) + 1);
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < (strlen(s1) + strlen(s2)); i++)
	{
		if (i < strlen(s1))
		{
			ch[i] = s1[i];
		}
		if (i >= strlen(s1))
		{
			ch[i] = s2[j];
			j++;
		}
	}
	ch[i] = '\0';
	return (ch);
}
