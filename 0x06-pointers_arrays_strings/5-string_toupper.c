#include "main.h"

/**
 * string_toupper - Change lowercase letters to uppercase
 *
 * @c: string
 *
 * Return: c
 *
 */

char *string_toupper(char *c)
{
	int i;
	for (i = 0; c[i] != '\0'; i++)

	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] -= ('a' - 'A');
		}
	}
	return (c);
}
