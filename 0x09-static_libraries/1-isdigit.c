#include "main.h"

/**
 * _isdigit - checks for a digit 0 through 9
 * @c: sets the parameter
 * Return: 1 if succeful 0 when otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
