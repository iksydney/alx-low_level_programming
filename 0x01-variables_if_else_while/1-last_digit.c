#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - The last digit
 * Description: Prints the last digit of a random number
 * and tells if it is > five,zero or less than six and not zero.
 * Return: 0 for success and run effectively without error
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, (n % 10));

	if ((n % 10) > 5)
	{
		printf("and is greater than 5\n");
	}
	else if ((n % 10 == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
