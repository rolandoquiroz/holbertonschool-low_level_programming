#include "lists.h"
/**
 * add_dnodeint_end - Makes the sum of two numbers
 * @head: Pointer to pointer to the first node
 * @n: Data
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *aux = NULL;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;

		return (new_node);
	}

	for (aux = *head; aux->next != NULL; aux = aux->next)
		;

	aux->next = new_node;
	new_node->prev = aux;

	return (new_node);
}
