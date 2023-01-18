#include "main.h"

/**
 * print_chessboard - prints the layout of a chessboard
 * @a: character
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int h;

	for (h = 0; h < 8; h++)
	{
		int v;

		for (v = 0; v < 8; v++)
		{
			_putchar(a[h][v]);
		}
		_putchar('\n');
	}
}
