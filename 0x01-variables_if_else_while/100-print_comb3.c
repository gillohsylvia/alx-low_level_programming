#include <stdio.h>

/**
 *main - all code
 *
 *Description: Printing numbers in two digits
 *
 *Return: 0
 *
 */
int main(void)
{
	int tens;
	int ones;

	for (tens = 0; tens <= 9; tens++)
	{
		for (ones = tens + 1; ones <= 9; ones++)
		{
			putchar(tens + '0');
			putchar(ones + '0');

			if (tens < 8)
			{
				putchar(',');
				putchar(' ');
			}

		}
	}

	return (0);
}
