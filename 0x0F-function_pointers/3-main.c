#include "3-calc.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: argument array
 * Return: void
 */

int main(int argc, char *argv[])
{
	int x, y;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	printf("%d\n", p(x, y));
	return (0);
}
