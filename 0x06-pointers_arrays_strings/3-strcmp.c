#include "main.h"

/**
 * _strcmp - function that compares two string
 *
 * @s1: first parameter
 * @s2: second parameter
 *
 * Return: 15, -15 or 0
 */
int _strcmp(char *s1, char *s2)
{
	int i, value;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] == '\0')
		{
			value = -15;
			break;
		}
		else if (s2[i] == '\0')
		{
			value = 15;
			break;
		}
		else if (s2[i] == s1[i])
		{
			value = 0;
		}
	}
	return (value);
}
