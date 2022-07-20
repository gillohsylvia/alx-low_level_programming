#include "shell.h"

/**
  * print_environ - prints all the environment variables.
  * Return: nothing.
  */
void print_environ(void)
{
	int i;

	i = 0;
	while (environ[i])
		printf("%s\n", environ[i++]);
}
