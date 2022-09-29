#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument counter.
 * @argv: Argument vector
 * Return: Always 0.
 */

int main(int argc, char *argv[])

{
	char pass[65];
	char ans[7];
	int sum = 0, x = 0;
	(void) argc;
	strcpy(pass, "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJc");
	strcat(pass, "YLU+4mjW6fxqZeF3Qa1rPhdKIouk");

	ans[7] = '\0';
	ans[0] = pass[(strlen(argv[1]) ^ 0x3b) & 0x3f];
	while (argv[1][x])
		sum += argv[1][x++];
	ans[1] = pass[(sum ^ 0x4f) & 0x3f];
	x = 0, sum = 1;
	while (argv[1][x])
		sum *= argv[1][x++];
	ans[2] = pass[(sum ^ 0x55) & 0x3f];
	sum = 0;
	for (x = 0; argv[1][x]; x++)
		if (argv[1][x] > sum)
			sum = argv[1][x];
	srand(sum ^ 0xe);
	ans[3] = pass[rand() & 0x3f];
	sum = 0;
	for (x = 0; argv[1][x]; x++)
		sum += (argv[1][x] * argv[1][x]);
	ans[4] = pass[(sum ^ 0xef) & 0x3f];
	for (x = *argv[1]; x > 0; x--)
		sum = rand();
	ans[5] = pass[(sum ^ 0xe5) & 0x3f];
	printf("%s", ans);
	return (0);
}
