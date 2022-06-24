#include <stdio.h>
#include <stdlib.h>
/**
 * digit - checks the string in argv is a number
 *
 * Description: checks the string in argv is a number
 *
 * @s: pointer
 * Return: 1 if true -1 if false
 */
int digit(char *s)
{
	int i;
	int x = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			x = x * 10 + (s[i] - '0');
		else
			return (-1);
	}
	return (0);
}

/**
 * main -  adds positive numbers
 *
 * Description:  adds positive numbers
 *
 * @argc: integer
 * @argv: pointer
 * Return: 0 or 1 if wrong
 */
int main(int argc, char **argv)
{
	int i;
	int y = 0;

	if (argc >= 3)
	{
		for (i = 1; i < argc; i++)
		{
			if (digit(argv[i]))
			{
				printf("%s\n", "Error");
				return (1);
			}
			else
				y += atoi(argv[i]);
		}
		printf("%d\n", y);
	}
	else
	{
		if (argc == 1)
		{
			printf("%d\n", 0);
		}
		if (argc == 2)
			printf("%s\n", "Error");
	}
	return (0);
}
