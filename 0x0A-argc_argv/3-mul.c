#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that multiplies 2 numbers of the cdl
 *
 * @argc: argument count
 * @argv: argument array
 *
 * Return: Error or the result of the multiplication followed
 * by 1 or 0 respectively
 */
int main(int argc, char *argv[])
{
	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
