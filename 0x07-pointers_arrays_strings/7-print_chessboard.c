#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: row
 * Return: no return
 */
void print_chessboard(char (*a)[8])
{
	unsigned int x;
	unsigned int y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
