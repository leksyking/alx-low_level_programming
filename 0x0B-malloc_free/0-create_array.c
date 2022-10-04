#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - function that creates an array
 *
 * @size: array size
 * @c: first element in the array
 *
 * Return: returns the array
 */
char *create_array(unsigned int size, char c)
{
	char *ch;

	ch = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	if (ch == NULL)
	{
		return (NULL);
	}
	ch[0] = c;
	return (ch);
}
