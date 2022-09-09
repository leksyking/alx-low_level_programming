#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always on (Success)
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters == 'e' || letters == 'q')
		{
			continue;
		}
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
