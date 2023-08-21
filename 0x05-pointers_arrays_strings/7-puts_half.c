#include "main.h"

/**
 * puts_half - prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: sets character parameter
 * Return: half of input
 */

void puts_half(char *str)
{
	int j, n, longi;

	longi = 0;

	for (j = 0; str[j] != '\0'; j++)
		longi++;

	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (j = n; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}
