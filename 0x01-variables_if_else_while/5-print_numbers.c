#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main -  Prints base ten real  number and all
 *
 * @void: Empty parameter list for main
 *
 * Description: Prints number 0-9
 *
 * Return: 0 for success
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
