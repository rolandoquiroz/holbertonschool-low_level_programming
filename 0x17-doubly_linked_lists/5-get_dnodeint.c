#include "lists.h"
/**
 * get_dnodeint_at_index - Makes the sum of two numbers
 * @head: First operand
 * @index: Second operand
 *
 * Return: The sum of the two parameters
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	while (index)
	{
		head = head->next;

		if (head == NULL)
			return (NULL);

		index--;
	}

	return (head);
}
