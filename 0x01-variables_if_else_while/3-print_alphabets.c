#include <stdio.h>
/**
 * main - Entry point
 * Description: Use `putchar` to print lowercase and then uppercase alphabet.
 * Return: 0
 */
int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			;
		else
			putchar (c);
	}
	putchar ('\n');
	return (0);
}
