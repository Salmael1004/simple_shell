#include "shell.h"

/**
 * free_donut - frees memory allocated for command
 * @cmd: pointer to allocated memory
 *
 * Return: No return
 */
void free_donut(char **cmd)
{
	size_t n = 0;

	if (cmd == NULL)
		return;

	while (cmd[n])
	{
		free(cmd[n]);
		n++;
	}

	if (cmd[n] == NULL)
		free(cmd[n]);
	free(cmd);
}


/**
 * free_ex - Frees memory allocated and exit shell
 * @cmd: pointer to allocated  memory
 *
 * Return: No return
 */
void free_ex(char **cmd)
{
	size_t n = 0;

	if (cmd == NULL)
		return;

	while (cmd[n])
	{
		free(cmd[n]);
		n++;
	}

	if (cmd[n] == 0)
		free(cmd[n]);
	free(cmd);
	exit(EXIT_FAILURE);
}
