#include "main.h"

/**
 * _strchr - This is the entry point
 * @s: sets the input
 * @c: sets the input
 * Return: Always 0 when successful
 */

char *_strchr(char *s, char c)
{
	int j = 0;

	for (; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
