#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - : Prints the alphabet
 * @void: Empty parameter list for main
 *
 * Description: prints the alphabet in reverse order
 * Only putchar can be used
 * Return: 0 if there is success
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
