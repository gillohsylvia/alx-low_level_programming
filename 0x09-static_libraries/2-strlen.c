#include "main.h"
/**
 * _strlen - returns the length of string
 * @s: string to return length
 * Return: length of @s
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
