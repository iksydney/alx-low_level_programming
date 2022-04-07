#include <stdio.h>

/* main - prints all arguments it receives
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to string
 * Return: always 0 for success
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (int i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
