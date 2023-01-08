#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using interpolation search
 *
 * @array: Array to retrieve value from
 * @size: Size of the array
 * @value: Value to be retived from the array
 *
 * Return: The index of value in the array
 * Otherwise: -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	int guess;
	int start = 0;
	int end = size - 1;



	if (!array)
	{
		return (-1);
	}
	while (value >= array[start] /*&& value <= array[end]*/ && start <= end)
	{
		/**
		 * guess = start + value - array[start] * (start - end)
			/ array[start] - array[end];
		*/
		guess = start + (((double)(end - start)
					/ (array[end] - array[start])) * (value - array[start]));

		if (guess > end)
		{
			printf("Value checked array[%d] is out of range\n", guess);
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", guess, array[guess]);
		if (array[guess] == value)
		{
			return (guess);
		}
		if (array[guess] > value)
		{
			end = guess - 1;
		}
		else
		{
			start = guess + 1;
		}
	}
	return (-1);
}
