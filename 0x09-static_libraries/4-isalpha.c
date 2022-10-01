#include <ctype.h>

/**
 * _isalpha - check for alphabetic character
 *
 * @c: the argument
 *
 * Return: return 1 if true and 0 if false
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}
