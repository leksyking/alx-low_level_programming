#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly  allocated
 * space in memeory.
 * @str: string parameter
 *
 * Return: a pointer
 */
char *_strdup(char *str)
{
	char *ch;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	ch = malloc(sizeof(char) * strlen(str));
	for (i = 0; str[i] != '\0'; i++)
	{
		ch[i] = str[i];
	}
	ch[i] = '\0';
	return (ch);
}
