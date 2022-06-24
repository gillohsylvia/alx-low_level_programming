#include "main.h"

/**
 * _islower - checks if a character islower case
 * @c: The character to check
 * Return: 1 if lowercase 0 otherwise
 */
int _islower(int c)
{
	if (c < 97 || c > 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
