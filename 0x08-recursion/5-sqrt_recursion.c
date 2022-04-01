#include "main.h"
/**
 * _sqrt2 - returns the natural square root of a number
 * @a - integer
 * @b - integer that iterates from 1 to n
 * Return: success
 * on error: -1 is returned
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
