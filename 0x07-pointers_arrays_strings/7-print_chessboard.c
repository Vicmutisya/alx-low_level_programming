#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: sets the array
 * Return: Always 0 when successful
 */

void print_chessboard(char (*a)[8])
{
	int k;
	int l;

	for (k = 0; k < 8; k++)
	{
		for (l = 0; l < 8; l++)
			_putchar(a[k][l]);
		_putchar('\n');
	}
}
