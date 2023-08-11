#include <stdio.h>

/**
  * main - Prints all possible diffrent combination of two digit
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int k;
	int l;

	for (k = '0'; k <= '9'; k++)
	{
		for (l = '0'; l <= '9'; l++)
		{
			if (k < l)
			{
			putchar(k);
			putchar(l);

				if (k != '8' || (k == '8' && l != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
