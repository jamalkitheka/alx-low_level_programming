#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main-main block
 * print the sum of all multiples of 3 or 5 below 1024
 * Return:0
 */
int main(void)
{
	int j = 1;
	int total = 0;

	while (j < 1024)
	{
		if (j % 3 == 0)
			total += j;
		else if (j % 5 == 0)
			total += j;

		j++;
	}
	printf("%d\n", total);

	return(0);
}
