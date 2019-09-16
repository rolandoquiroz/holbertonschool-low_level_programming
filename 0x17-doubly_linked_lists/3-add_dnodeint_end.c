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
	dlistint_t *new_node;
	dlistint_t *ptr = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (ptr == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		new_node->next = ptr;
		return (new_node);
	}

	while ((ptr != NULL) &&(ptr->next !=NULL))
		ptr = ptr->next;

	ptr->next = new_node;
	new_node->prev = ptr;
	new_node->next = NULL;

	return (new_node);
}
