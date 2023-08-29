#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 *@s: first value -char
 *@accept: second value - char
 *
 * Return: char with result
 */
unsigned int _strspn(char *s, char *accept)
{
	int c = 0, b = 0;
	unsigned int a = 0;

	while (s[b] != ' ' && s[b] != '\0')
	{
		while (accept[c] != '\0')
		{
			if (s[b] == accept[c])
				a++;
			c++;
		}
		b++;
		c = 0;
	}
	return (a);
}
