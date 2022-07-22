#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the minimum number of coins
 *to make change for an amount of mone
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success and 1 otherwise
 */
int main(int argc, char **argv)
{
	int cents, coins;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (1);
	}
	cents = atoi(argv[1]);
	coins = cents / 25;
	cents %= 25;
	coins = coins + cents / 10;
	cents %= 10;
	coins = coins + cents / 5;
	cents %= 5;
	coins = coins + cents / 2;
	cents %= 2;
	coins = coins + cents;
	printf("%d\n", coins);
	return (0);
}
