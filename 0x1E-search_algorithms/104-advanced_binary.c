#include "search_algos.h"

/**
 * advanced_binary - searches for a value using the binary search algorithm
 *
 * @array: Array to retrieve value from
 * @size: size of the array
 * @value: Value to be retrieved
 *
 * Return: The3 index of the valye to be retrieved
 * Otherwise: -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	return (binary_search_recursive(array, value, 0, size - 1));
}

/**
 * binary_search_recursive - implements the binary search alghorithm
 * recursively
 *
 * @array: Array to retrieve value from
 * @value: Value to be retrieved from the array
 * @start: New starting boundary of the sub-array after a partition
 * @end: New end boundary of the sub-array after a partition
 *
 * Return: The index of the value to be retrieved
 * Otherwise: -1
 */

int binary_search_recursive(int *array, int value, int start, int end)
{
	int mid = (end + start) / 2;
	int i;

	if (end < start)
		return (-1);

	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
	if (array[mid] == value && (mid == start || array[mid - 1] != value))
	{
		return (mid);
	}
	if (value > array[mid]) /* Go to the right of the array */
	{
		/*printf("Right here\n");*/
		/*printf("mid: %d\n", mid);*/
		return (binary_search_recursive(array, value, mid + 1, end));
	}
	else /*if (value < array[mid])*/
	{
		return (binary_search_recursive(array, value, start, mid));
	}
	return (-1);
}
