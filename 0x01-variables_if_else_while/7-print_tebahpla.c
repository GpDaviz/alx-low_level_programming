#include <stdio.h>

/**
 * main - Print lower case alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char k;

	for (k = 'z'; k >= 'a'; k--)
	{
		putchar(k);
	}

	putchar('\n');

	return (0);
}
