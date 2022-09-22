#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @str: string parameter
 *
 * Return: capitalised string
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[0] <= 122 && str[0] >= 97)
		{
			str[0] = str[0] - 32;
		}
		if (str[i] == 32 || str[i] == 46 || str[i] == '\t' ||
			str[i] == '\n' || str[i] == 44 || str[i] == 59 ||
				str[i] == '!' || str[i] == '?' || str[i] == '(' ||
					str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			if (str[i + 1] <= 122 && str[i + 1] >= 97)
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	i++;
	}
	return (s);
}
