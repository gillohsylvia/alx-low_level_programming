#include <stdio.h>
/**
 * main - all codes
 *
 * Description: Print letters in lowercase except for q and e
 *
 * Return: 0
 *
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
	if (alphabets != 'e' && alphabets != 'q')
	{
	putchar(alphabets);
	}
	putchar('\n');
	}
	return (0);
}
