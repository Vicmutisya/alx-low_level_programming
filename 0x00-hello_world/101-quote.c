#include <stdio.h>
#include <unistd.h>

/**
 * main - Unix funtion printing to the standard error
 *
 * Return: 1 when successful
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
