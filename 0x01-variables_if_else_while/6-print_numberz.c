#include <stdio.h>

/**
 *main - all codes
 *Description: a program
 *
 *Return: 0
 *
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar(number + '0');

	putchar('\n');
	return (0);
}
