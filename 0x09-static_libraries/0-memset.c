#include "main.h"

/**
 * _memset - fills a block of memory with a specific value
 * @s: sets starting address of memory to be filled
 * @b: sets the desired value
 * @n: sets the number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
