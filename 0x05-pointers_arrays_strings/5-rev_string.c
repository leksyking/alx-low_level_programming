#include "main.h"

/**
 * rev_string - functionthat reverses a string
 *
 * @s: string parameter
 */
void rev_string(char *s)
{
	char tmp;
	int i, strlen, strlen1;

	strlen = 0;
	strlen1 = 0;
	while (s[strlen] != '\0')
	{
		strlen++;
	}
	strlen1 = strlen - 1;

	for (i = 0; i < strlen / 2; i++)
	{
		tmp = s[i];
		s[i] = s[strlen1];
		s[strlen1--] = tmp;
	}
}
