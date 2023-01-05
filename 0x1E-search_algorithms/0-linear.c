#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using
 * the LInear Search Alogorithm
 * @array: The Array to retrieve value from
 * @size: The size of the array
 * @value: The value to be retrieved from the array
 * Return: The index of value in the array
 * Otherwise: -1 or NULL if array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
