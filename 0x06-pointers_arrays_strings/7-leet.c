#include "main.h"

/**
 * leet - Encode a string into 1337.
 * @s: The string to be encoded.
 * Return: A pointer to the encoded string.
 */
char *leet(char *s)
{
	int b;

	for (b = 0; s[b] != '\0'; b++)
	{
		switch (s[b])
		{
			case 'a':
			case 'A':
				s[b] = '4';
				break;
			case 'e':
			case 'E':
				s[b] = '3';
				break;
			case 'o':
			case 'O':
				s[b] = '0';
				break;
			case 't':
			case 'T':
				s[b] = '7';
				break;
			case 'l':
			case 'L':
				s[b] = '1';
				break;
			default:
		}
	}
	return (s);
}

