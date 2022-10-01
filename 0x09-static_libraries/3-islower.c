#include <ctype.h>

/**
 * _islower - check for lower case
 *
 * @c: is an integer being checked
 *
 * Return: islower - is a function gotten from the ctype.h library
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
