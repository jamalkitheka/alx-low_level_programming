#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	long int n = 10;
	int div = 2;
	long int maxfactor;

	while (1)
	{
		if (n % div != 0)
			div = div + 1; /* div++ */
		else
		{
			maxfactor = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld", maxfactor);
				break;
			}
		}
	}
	return (0);
}
