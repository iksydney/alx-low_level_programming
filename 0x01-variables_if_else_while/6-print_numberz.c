#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Prints base 10 numbers
 * @void: empty parameter list for main
 *
 *  Description: Prints numbers 0-9
 *
 *  Return: 0 for success
 */
int main(void)
{
	int num = 45;

	while (num <= 54)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
