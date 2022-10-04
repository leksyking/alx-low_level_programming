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
	unsigned int i;

	ch = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	if (ch == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ch[i] = c;
	return (ch);
}
