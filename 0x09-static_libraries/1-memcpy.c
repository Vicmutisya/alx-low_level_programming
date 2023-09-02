#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: sets memory where is stored
 * @src: sets memory where is copied
 * *@n: sets the number of bytes
 *
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int k = n;

	for (; j < k; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
