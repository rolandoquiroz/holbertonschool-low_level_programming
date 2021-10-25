#include "sort.h"
/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: Doubly linked list of integers in ascending order to be sorted
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr = NULL;

	if (list == NULL || *list == NULL)
		return;

	curr = (*list)->next;

	while (curr)
	{
		while ((curr->prev != NULL) && (curr->n < curr->prev->n))
		{
			curr->prev->next = curr->next;

			if (curr->next != NULL)
				curr->next->prev = curr->prev;

			curr->next = curr->prev;
			curr->prev = curr->prev->prev;
			curr->next->prev = curr;

			if (curr->prev == NULL)
				*list = curr;
			else
				curr->prev->next = curr;
			print_list(*list);
		}
		curr = curr->next;
	}
}
