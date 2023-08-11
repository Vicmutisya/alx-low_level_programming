#include <stdio.h>

/**
 * main - prints lowercase alphabet in revers
 *
 * Return: 0 when successful
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
