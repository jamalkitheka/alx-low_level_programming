#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add numbers
 * @argc: number of arguments passed
 * @argv: argument vector of pointers to string
 * Return: 0 otherwise 1
 */
int main(int argc, char **argv)
{
	int x = 0;
	int y = 1, j;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	while (y < argc)
	{
		for (j = 0; argv[y][j] != '\0'; j++)
		{
			if (argv[y][j] < '0' || argv[y][j] > '9')
			{
				printf("Error\n");
				return (0);
			}
		}
		x = x + atoi(argv[y]);
		y++;
	}
	printf("%d\n", x);
	return (0);
}
