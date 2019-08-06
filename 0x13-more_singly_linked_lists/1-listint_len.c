#include "lists.h"

/**
 * listin_len -Function that finds the number of elements in list
 * @h: Pointer to the head of listin_len_t list
 * Return: The number of elements in the list
 */

size_t listin_len(const listin_len_t *h)
{
	size_t count = 0;/*number of nodes*/

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
