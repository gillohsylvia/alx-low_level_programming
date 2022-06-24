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
 * _strncat - appends not more than @n characters
 * @dest: string @src is appended here
 * @src: string @dest is appended to
 * @n: length of string should be less than this value
 * Return: appendes string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
