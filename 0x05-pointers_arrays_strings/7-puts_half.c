#include <string.h>
#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: parameter
 *
 * Return: void.
 */

void puts_half(char *str)
{
	int i;
	int a = strlen(str);
	int b;

	if (a % 2)
	{
		b = ((a - 1) / 2) + 1;
	} else
	{
		b = (a / 2);
	}
	for (i = b; i < a; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
