#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: delimiter
 * @n: n args
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int s;
	char *clone;

	va_start(arguments, n);

	for (s = 0; s < n; s++)
	{
		clone = va_arg(arguments, char*);
		if (clone != NULL)
			printf("%s", clone);
		else
			printf("%p", clone);
		if (separator != NULL && s < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arguments);
}
