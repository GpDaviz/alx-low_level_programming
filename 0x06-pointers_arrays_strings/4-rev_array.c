#include "main.h"

/**
 * reverse_array - reverse
 *
 * @a: array of integers
 * @n: number of elements in array
 *
 * REeturn: 0
 */

void reverse_array(int *a, int n)
{
	int p;
	int o;

	for (p = 0; p < (n / 2); p++)
	{
		o = a[p];
		a[p] = a[n - p - 1];
		a[n - p - 1] = o;
	}
	return (0);
}
