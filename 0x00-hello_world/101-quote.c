#include <stdio.h>
#include <unistd.h>

/**
 * main - Unix program that prints followed by a new line to the standard error
 * Return: 1 when successful
 */

int main(void)
{
	fput("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
