#include "shell.h"

/**
 * create_cld - A function that creates a sub process.
 * @cmd: The pointer to token.
 * @nm: The pointer to the name
 * @env: The pointer to the enviromental variables.
 * @cc: Number of executed cicles.
 *
 * Return: Nothing.
 */
void create_cld(char **cmd, char *nm, har **env, int cc)
{
	int pid = 0;
	int status = 0;
	int wait_error = 0;

	pid = fork();
	if (pid < 0)
	{
		perror("Error: ");
		free_exit(cmd);
	}
	else if (pid == 0)
	{
		execute(cmd, nm, env, cc);
		free_dp(cmd);
	}
	else
	{
		wait_error = waitpid(pid, &status, 0);
		if (wait_error < 0)
		{
			free_exit(cmd);
		}
		free_dp(cmd);
	}
}

/**
 * change_direct - function that changes working directory.
 * @dest: new working current directory.
 *
 * Return: 0 on success, -1 on failure.
 */
int change_direct(const char *dest)
{
	char *buffer = NULL;
	size_t size = 1024;

	if (dest == NULL)
		dest = getcwd(buffer, size);

	if (chdir(dest) == -1)
	{
		perror(dest);
		return (98);
	}
	return (1);
}
