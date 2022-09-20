#include "main.h"

/**
 * _atoi - function that converst a string to an integer
 *
 * @s: string to be converted
 * Return: the returned integer
 */
int _atoi(char *s)
{
	int j, d, len, n, f, digit;

	j = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (j < len && f == 0)
	{
		if (s[j] == '-')
			++d;

		if (s[j] >= '0' && s[j] <= '9')
		{
			digit = s[j] - '0';
			if (d % 2)
				digit  = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
			f = 0;
		}
		j++;
	}
	if (f == 0)
		return (0);
	return (n);
}
