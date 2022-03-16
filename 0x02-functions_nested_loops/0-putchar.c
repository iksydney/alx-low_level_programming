#include "main.h"
/**
 * main - putchar printing
 *
 * Description - program that prints _putchar, followed by a new line
 *
 *
 *Return: 0 for success
 */
int main(void)
{
	char s[] = "_putchar";
	int i = 0;

	whle (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar(10);

	return (0);
}
