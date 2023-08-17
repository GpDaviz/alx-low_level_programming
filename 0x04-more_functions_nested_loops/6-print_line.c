#include "main.h"

/**
 * print_line - Write a function that draws a straight line in the terminal.
 * @n: number of times
 *
 * Return: void
 */


void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
