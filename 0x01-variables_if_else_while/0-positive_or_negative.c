#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Positive or Negative- print sign of random number
 *
 * Description: An if/else statement that declares the sign
 * either positive or negative, and also states if the value
 * is zero
 *
 * Return: 0 for success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}

