#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet 10 times
 *
 * Return: 0 when succesful
 */
void print_alphabet_x10(void)
{
	int n;
	char m;

	for (n = 0 ; n < 10 ; n++)
	{
		for (m = 'a' ; m <= 'z' ; m++)
			_putchar(m);
		_putchar('\n');
	}
}
