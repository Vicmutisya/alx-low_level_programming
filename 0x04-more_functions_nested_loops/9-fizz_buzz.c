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
		if (l % 3 == 0 && l % 5 != 0)
		{
			printf("Fizz");
		} else if (l % 5 == 0 && l % 3 != 0)
		{
			printf("Buzz");
		} else if (l % 3 == 0 && l % 5 == 0)
		{
			printf("FizzBuzz");
		} else if (l == 1)
		{
			printf("%d", l);
		} else
		{
			printf("%d", l);
		}
	}
	printf("\n");
	return (0);
}
