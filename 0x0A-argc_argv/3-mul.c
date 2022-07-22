#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: number of argument passed
 * @argv: argument vector
 * Return: result of the multiplication, followed by a new line
 */

int main(int argc, char *argv[])
{
	(void) argc;
	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
