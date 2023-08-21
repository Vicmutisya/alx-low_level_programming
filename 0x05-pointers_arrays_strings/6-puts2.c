#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first chacracter
 * @str: character parameter
 * Return: print
 */

void puts2(char *str)
{
	int longi = 0;
	int j = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	j = longi - 1;
	for (o = 0 ; o <= j ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
