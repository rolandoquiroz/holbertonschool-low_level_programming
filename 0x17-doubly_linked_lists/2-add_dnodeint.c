#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Double pointer to the first node of the list.
 * @n: Data value for the new node.
 *
 * Return: NULL on failure or address of the new element on success.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
	}

	if (*head)
	{
		new->next = *head;
		new->prev = NULL;
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
