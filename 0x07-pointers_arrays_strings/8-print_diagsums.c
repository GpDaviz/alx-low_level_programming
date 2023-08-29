#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 *@a: first value -char
 *@size: second value -int
 */
void print_diagsums(int *a, int size)
{
	int b;
       	int c, suma_1 = 0, suma_2 = 0, d, e = 0;

	d = size - 1;
	for (b = 0; b < size; b++)
	{
		for (c = 0; c < size; c++)
		{
			if (b == c)
				suma_1 += a[e];
			if (c == d)
				suma_2 += a[e];
			e++;
		}
		d--;
	}
	printf("%b, %b\n", suma_1, suma_2);
}
