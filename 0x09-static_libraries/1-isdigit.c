#include "main.h"
#include <ctype.h>

/**
 * _isdigit - function to check for a digit
 *
 * @c: parameter
 * Return: 1if c is a digit or 0 if not
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
