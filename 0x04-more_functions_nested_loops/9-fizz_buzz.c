#include <stdio.h>

/**
 * main - Fizz buzz code
 *
 * Return: Always o.
 */
int main(void)
{
	int i;
	char *n;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		{
			printf("Buzz");
			printf("\n");
			return (0);
		}
		if ((i % 3) == 0)
		{
			n = "Fizz";
			printf("%s ", n);
		}
		else if ((i % 5) == 0)
		{
			n = "Buzz";
			printf("%s ", n);
		}
		else if (((i % 5) == 0) && ((i % 3) == 0))
		{
			n = "FizzBuzz";
			printf("%s ", n);
		}
		else
		{
			printf("%d ", i);
		}
	}
	putchar('\n');
	return (0);
}
