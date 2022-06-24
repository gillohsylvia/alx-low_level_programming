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

/**
 * _strcat - appends a string to another
 * @src: string to append
 * @dest: string to append to
 * Return: appended string
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
