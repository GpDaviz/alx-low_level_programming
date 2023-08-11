#include <stdio.h>

/**
  * main - Prints 3 combination of numbers
  *
  * Return: Always (Success)
  */
int main(void)
{
	int l, i, k, j;

	for (l = 48; l <= 57; l++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (j = 48; j <= 57; j++)
				{
					if (((k + j) > (l + i) &&  k >= l) || l < k)
					{
						putchar(l);
						putchar(i);
						putchar(' ');
						putchar(k);
						putchar(j);

					if (l + i + k + j == 227 && l == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

