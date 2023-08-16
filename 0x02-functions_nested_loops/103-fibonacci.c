#include <stdio.h>

/**
 * main - finds and prints the sum of even-valued terms
 * followed by a new line
 * Return: 0 when successful
 */

int main(void)

{
	int i;
	unsigned long int p, q, next, sum;

	p = 1;
	q = 2;
	sum = 0;

	for (i = 1 ; i <= 33; ++i)
	{
		if (p < 4000000 && (p % 2) == 0)
		{
			sum = sum + p;
		}
		next = p + q;
		p = q;
		q = next;
	}

	printf("%lu\n", sum);

	return (0);
}
