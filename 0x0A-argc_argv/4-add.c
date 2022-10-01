#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that adds positive numbers
 *
 * @argc: arguments count
 * @argv: argument array(vector)
 *
 * Return: 1 if error or 0 if success
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1 || argc == 2)
	{
		printf("%d\n", sum);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if ((*argv[i] > 'a' && *argv[i] < 'z') ||
				(*argv[i] > 'A' && *argv[i] < 'Z'))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

