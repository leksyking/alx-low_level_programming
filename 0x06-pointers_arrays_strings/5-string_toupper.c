#include "main.h"

/**
 * string_toupper - function that changes lower cases to upper cases
 *
 * @str: string parameter
 *
 * Return: the upper cased strings
 */
char *string_toupper(char *str)
{
	int i, n;

	for (n = 0, str[n] != '\0'; n++)
	{
	}
	for (i = 0; i < n; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
