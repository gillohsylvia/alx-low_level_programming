#include <stdio.h>

/**
 *main - all codes
 *
 *Description: Printing lower case letters in reverse order
 *
 *Return: 0
 *
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
