#include <stdio.h>

/**
  * print_to_98 - is a function that runs numbers till 98
  *
  * @n: takes in int n and checks
  *
  */
void print_to_98(int n)
{
	if ((n > 98) || (n == 98))
	{
		while (n >= 98)
		{
			if (n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
			n--;
		}
	}
	else if ((n < 98) || (n == 98))
	{
		while (n <= 98)
		{
			if (n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
			n++;
		}
	}
	putchar(10);
}
