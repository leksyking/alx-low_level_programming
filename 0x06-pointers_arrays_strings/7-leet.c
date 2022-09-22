#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * @str: string parameter
 *
 * Return:n encoded string
 */
char *leet(char *str)
{
	int i, n;

	for (n = 0; str[n] != '\0'; n++)
	{
	}
	for (i = 0; i < n; i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
			str[i] = '4';
		else if (str[i] == 'e' || str[i] == 'E')
			str[i]  = '3';
		else if (str[i] == 'o' || str[i] == 'O')
			str[i] = '0';
		else if (str[i] == 't' || str[i] == 'T')
			str[i] = '7';
		else if (str[i] == 'l' || str[i] == 'L')
			str[i] = '1';
	}
	return (str);
}
