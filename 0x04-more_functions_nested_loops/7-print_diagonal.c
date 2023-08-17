#include "main.h"

/**
 * print_diagonal - function draws a diagonal line on the terminal
 * @n: sets parameter the number of times '\' character should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j <= i ; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
