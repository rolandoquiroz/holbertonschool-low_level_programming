#include "lists.h"
/**
 * free_dlistint - Makes the sum of two numbers
 * @head: First operand
 *
 * Return: The sum of the two parameters
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = NULL;

	if (head == NULL)
		return;

	while (head)
	{
		aux = head->next;
		free(head);

		if (aux == NULL)
			return;

		aux->prev = NULL;
		head = aux;
	}
}
