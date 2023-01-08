#include "search_algos.h"
#include <math.h>

int binary_search(int *array, size_t size, int value);

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using exponential search.
 * Uses powers of 2 as exponential ranges to search the array.
 *
 * @array: Array to retrieve value from
 * @size: Size of the array
 * @value: Value to be retrieved from array
 *
 * Return: Index of value in array
 * Otherwise: -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t start, temp;
	int end = size - 1;

	if (!array)
		return (-1);

	for (start = 1; start < size && array[start] <= value; start = start * 2)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	}
	temp = start;
	/*printf("Start has a value of %ld\n", start);*/
	/*printf("Temp has a value of %ld\n", temp);*/
	if (start >= size)
	{
		start = size - 1;
	}
	/*printf("Start has a value of %ld\n", start);*/
	if (array[start] == value)
	{
		return (start);
	}
	end = start;
	start = temp / 2;
	printf("Value found between indexes [%ld] and [%d]\n", start, end);
	/*printf("Before the search: %ld\n", start);*/
	/*printf("Before the search: %d\n", end);*/

	return (binary_search_recursive(array, value, start, end));
	return (-1);
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
	if (array[mid] == value)
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
		return (binary_search_recursive(array, value, start, mid - 1));
	}
	return (-1);
}
