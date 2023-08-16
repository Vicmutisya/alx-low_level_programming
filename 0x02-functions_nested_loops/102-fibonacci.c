#include <stdio.h>

/**
 * main - prints the 50 Fibonacci numbers
 * startiting with 1 followed by a new line
 * Return: 0 when successful
 */

int main(void)
{
	long int i, p, q, next;

	p = 1;

	q = 2;

	for (i = 1 ; i <= 50; ++i)
	{
		if (p != 20365011074)
		{
			printf("%ld, ", p);
		} else
		{
			printf("%ld\n", p);
		}
		next = p + q;
		p = q;
		q = next;
	}
	return (0);
}
