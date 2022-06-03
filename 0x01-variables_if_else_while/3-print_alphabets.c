#include <stdio.h>
/**
 *main - all codes
 *
 *Description: print alphabet in lower and uppercase
 *
 *Return: 0
 *
 */
int main(void)
{

	char alphabets;

for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
{
putchar (alphabets);
}
for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
{
putchar(alphabets);
}
putchar('\n');
return (0);
}
