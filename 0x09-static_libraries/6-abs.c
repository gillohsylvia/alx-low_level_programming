#include "main.h"

/**
 * _abs - print absolute value of a number
 * @a: number to return absolute value
 * Return: the absolute value of a number
 */
int _abs(int a)
{
	if (a < 0)
	{
		return (a * -1);
	}
	else
	{
		return (a);
	}
}
