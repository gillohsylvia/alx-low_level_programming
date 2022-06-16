#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: pointer to be evaluated
 * @src: pointer to be evaluated
 * @n: input value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;

	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}

	return (dest);
}
