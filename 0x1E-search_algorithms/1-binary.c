#include "search_algos.h"
/**
  * binary_search - Searches for a value in a sorted array
  *                 of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, low, high, i;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size -1;

	while (low <= high)
	{
		printf ("Searching in array: ");

		for (i = low; i < high; i++)
		{
			printf ("%d, ", array[i]);
		}
		printf ("%d\n", array[high]);

		mid = (high + low)/2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid +1;
		if (array[mid] > value)
			high = mid -1;
	}
	return (-1);
}
