#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: sets parameters for the size of the square
 *
 * Return: if size is 0 or less, function prints only a new line
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int k, l;

		for (k = 0 ; k < size ; k++)
		{
			for (l = 0 ; l < size ; l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
