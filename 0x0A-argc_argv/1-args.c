#include <stdio.h>
#include "main.h"

/**
 * main - function prints number of arguments passed to the program
 * @argc: sets the number of arguments
 * @argv: sets the array of arguments
 *
 * Return: Always 0 when successful
 */

int main(int argc, char *argv[])

{
(void) argv; /*Ignore argv*/

	printf("%d\n", argc - 1);
	return (0);
}
