#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted array using the Jump Search
 *
 * @list: Pointer to teh head of the list to search in
 * @size: number of nodes in the list
 * @value: The value to search for
 *
 * Return: Pointer to the first node where value is located
 * Otherwise: NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int jump, i, count = 0;
	listint_t *transv = NULL, *temp = NULL;

	if (list == NULL || size == 0)
		return (NULL);

	jump = sqrt(size);
	transv = list;
	while (transv->n <= value && transv->next != NULL)
	{
		temp = transv;
		count += jump;
		for (i = 0; i < jump && transv->next !=  NULL; i++)
		{
			transv = transv->next;
			if (transv->next == NULL)
			{
				count = count - 1;
				/*transv = temp;*/
			}
		}
		printf("Value checked at index [%d] = [%d]\n", count, transv->n);
	}
	count = count - i;
	printf("Value found between indexes [%d] and [%d]\n", count, count + i);

	if (transv->n == value)
		return (transv);
	for (temp = temp; temp->n <= value; temp = temp->next)
	{
		printf("Value checked at index [%d] = [%d]\n", count, temp->n);
		if (temp->n == value)
		{
			return (temp);
		}
		else if (temp->next == NULL)
			return (NULL);
		count++;
	}
	return (NULL);
}
