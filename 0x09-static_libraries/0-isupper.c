#include "main.h"
#include <ctype.h>

/**
 * _isupper - function to check for upper case
 *
 * @c: parameter
 * Return: 1 if uppercase and 0 if not
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
