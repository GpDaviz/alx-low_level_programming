#include "shell.h"

/**
 * call_command -that *command, size_t & size
 *
 * Return: 0 
 */

void call_command(char *command, size_t size);
{
	if (fgets(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			gp_print("\n");
			exit (EXIT_SUCCESS);
		}
		else
		{
			gp_print ("Error while reading input.\n");
			exit (EXIT_FAILURE);
		}
	}
	command [strcspn (command, "\n")] = '\0';
}
