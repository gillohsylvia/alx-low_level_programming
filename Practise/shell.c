#include "shell.h"
/**
  * main - entry point of the program
  * @ac: argument counter
  * @av: argument vector
  * @envp: array of strings.
  * Return: 0
  */
int main(int ac __attribute__((unused)), char *av[], char *envp[])
{
	char *buffer = NULL;
	size_t bufsize = 0;
	int status;
	pid_t child_pid;

	signal(SIGINT, SIG_IGN);
	while (1)
	{
		if (isatty(STDIN_FILENO))
			printf("~$ ");
		if (getline(&buffer, &bufsize, stdin) == -1)
			break;
		if (buffer == NULL)
			exit(0);
		av = parse_input_string(buffer);
		if (!av[0])
		{
			free(av);
			continue;
		}
		if (_strcmp(av[0], "env") == 0)
		{
			print_environ(), free(av);
			continue;
		}
		if (_strcmp(av[0], "exit") == 0)
			free(av), free(buffer), exit(0);
		child_pid = fork();
		if (child_pid == 0)
		{
			if (_strchr(av[0], '/') == NULL)
				av[0] = path_search(av[0]);
			if (execve(av[0], av, envp))
			{
				perror("execve"), exit(EXIT_FAILURE);
				break;
			}
		}
		wait(&status), free(av);
	}
	free(buffer);
	return (0);
}
