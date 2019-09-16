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
	unsigned int i;

	if (head == NULL)
		return (NULL);
	i = 0;
	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		i++;
		head = head->next;
	}
	return (head);
}
