#include "main.h"
#include <stdio.h>

/**
 * main - program to print all arguments
 *
 * @argc: arguments count
 * @argv: arguments array
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
