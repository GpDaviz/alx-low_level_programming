#include "shell.h"

/***
 * execute_mycommand - crate your own command
 *
 * Return: NULL
 */

void execute_mycommand(const char *mycommand);
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		execev(mycommand, mycommand, (char *)NULL);
		perror("execve");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
