#include "main.h"

/**
 * rot13 - function that encodes string
 *
 * @str: string to be encoded
 *
 * Return: encoded string
 */
char *rot13(char *str)
{
	int i = 0;
	int j;
	int begin[] = {'a', 'b'
