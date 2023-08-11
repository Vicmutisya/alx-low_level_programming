#include <stdio.h>

/**
 * main - prints all possible different combinations in three digits
 *
 * Return: 0 when successful
 */

int main(void)
{
	int j, k, l;

	for (j = 48 ; j < 58 ; j++)
	{
		for (k = 49 ; k < 58 ; k++)
		{
			for (l = 50 ; l < 58 ; l++)
			{
				if (l > k && k > j)
				{
					putchar(j);
					putchar(k);
					putchar(l);
					if (j != 55 || k != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
