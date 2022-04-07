#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: This counts the number of parameters that go into main
 * @argv: pointer of array of pointer containing strings entering main
 * Return: Always 0 for success
 */
int main(int argc, char **argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
