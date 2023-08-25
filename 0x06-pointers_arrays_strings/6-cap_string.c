#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: string
 * Return: str
 */

char *cap_string(char *str)
{
	int b, c;
	int trigger;
	char nots[] = ",;.!?(){}\n\t\" ";

	for (b = 0, trigger = 0; str[b] != '\0'; b++)
	{
		if (str[0] > 96 && str[0] < 123)
			trigger = 1;
		for (c = 0; nots[c] != '\0'; c++)
		{
			if (nots[c] == str[b])
				trigger = 1;
		}

		if (trigger)
		{
			if (str[b] > 96 && str[b] < 123)
			{
				str[b] -= 32;
				trigger = 0;
			}
			else if (str[b] > 64 && str[b] < 91)
				trigger = 0;
			else if (str[b] > 47 && str[b] < 58)
				trigger = 0;
		}
	}
	return (str);
}
