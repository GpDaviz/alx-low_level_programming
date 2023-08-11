#include <stdio.h>

/**
 * main - Alphabet that print in lower case, except q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	char q;

	for (q = 'a'; q <= 'z'; q++)

	if (q != 'q' && q != 'e')

	putchar(q);

	putchar('\n');
	return (0);
}
