#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string.
 * @s: parameter
 *
 * Return: void.
 */

void rev_string(char *s)
{
	char myCh;
	int i = strlen(s);
	int j = 0;

	while (j < i)
	{
		i--;
		myCh = s[j];
		s[j] = s[i];
		s[i] = myCh;
		j = j + 1;
	}
}
