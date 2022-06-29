#include <string.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * character, followed by a new line.
 * @str: parameter
 *
 * Return: void.
 */

void puts2(char *str)
{
	int x = strlen(str);
	int i;

	for (i = 0; i < x; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
