#include <stdio.h>

/**
 * main - find and print the largest prime factor of 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	long n = 612852475143;
	long divisor = 2;
	long largest = 0;

	while (n != 1)
	{
		if ((n % divisor) == 0)
		{
			n = n / divisor;
			largest = divisor;
		}
		divisor++;
	}
	printf("%ld\n", largest);
	return (0);
}

