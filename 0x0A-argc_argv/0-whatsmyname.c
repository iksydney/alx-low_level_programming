#include <stdio.h>
#include <stdlib.h>

/**
 * main: -  Entry point
 *
 * @argc:-   the number of arguments passed to the function
 * @argv:-  The argument vector of pointers to strings
 *
 * Reurn: Always 0 for (success)
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
