#include "main.h"
#include <ctype.h>
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
	int i, j, sum = 0;

	if (argc == 1 || argc == 2)
	{
		printf("%d\n", sum);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 1; j < argc; j++)
		{
			if (isdigit(*argv[j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

