#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers from 1 to 100 followed by a new line
 * Multiples of three prints Fizz instead of the number
 * Multiples of five prints Buss instead of the number
 * Multiples of both three and five prints FizzBuzz
 *
 * Return: 0 when successul
 */

int main(void)
{
	int l;

	for (l = 1 ; l <= 100 ; l++)
	{
		if ((l % 3 == 0) && (l % 5 == 0))
			printf("%s", "Buzz");
		else if (l % 5 == 0)
			printf("%s", "Buzz");
		else
			printf("%d", l);
		if (l != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
