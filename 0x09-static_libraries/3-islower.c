#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: Character to be checked
 * Return: if character is lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
