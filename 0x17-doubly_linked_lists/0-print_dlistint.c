#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: List to be printed
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cnt = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		cnt++;
	}

	return (cnt);
}
