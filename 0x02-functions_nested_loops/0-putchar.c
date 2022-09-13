#include "main.h"

/**
 * main - Entry point
 *
 * Return: Success 0 (Always)
 */
int main(void)
{
	char *ch = "_putchar";
	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
