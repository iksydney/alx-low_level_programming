#include "main.h"
/**
 * _memset - function fills the first n bytes of the memory
 * @s: memory area,
 * @b:  constant byte,
 * @n:  bytes filled,
 * Return: the pointer to dest.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
