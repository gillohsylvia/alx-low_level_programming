#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search
 *
 * @array: The array to retrieve value from
 * @size: The size of the array
 * @value: The value to retreived from the array
 *
 * Return: The index of value in the array
 * Otherwise: -1
 */

int binary_search(int *array, size_t size, int value)
{
	int mid, start, end, i;

	start = 0;
	end = size - 1;
	mid = size / 2;

	if (!array)
		return (-1);
	if (array[mid] == value)
		return (mid);
	while (array[mid] != value)
	{
		if (start <= end)
		{
			mid = (start + end) / 2;
			/* Helps for visualization */
			printf("Searching in array: ");
			for (i = start; i < end; i++)
			{
				printf("%d, ", array[i]);
			}
			printf("%d\n", array[i]);
			/*	*	*/
			if (value > array[mid]) /* We search to the right */
			{
				start = mid + 1;
			}
			else /*if (value < array[mid]) */ /* Search to the left */
			{
				end = mid - 1;
			}
			continue;
		}
		else
		{
			return (-1);
		}
	}
	return (mid);
}
