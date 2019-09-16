#include "lists.h"
/**
 * op_add - Makes the sum of two numbers
 * @arg1: First operand
 * @arg2: Second operand
 *
 * Return: The sum of the two parameters
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *ptr = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (ptr == NULL)
	{
		*head = new;
		new->prev = NULL;
		new->next = ptr;
		return (new);
	}


	while (ptr->next != NULL && ptr != NULL)
		ptr = ptr->next;

	ptr->next = new;
	new->prev = ptr;
	new->next = NULL;

	return (new);
}
