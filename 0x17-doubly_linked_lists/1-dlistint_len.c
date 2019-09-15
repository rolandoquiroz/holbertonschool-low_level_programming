#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cnt;

	cnt = 0;
	if (h == NULL)
		return (0);
	while (h->prev != NULL)
		h = h->prev;
	while (h)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
