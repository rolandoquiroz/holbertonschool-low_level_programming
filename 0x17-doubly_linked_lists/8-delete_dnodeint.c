#include "lists.h"
/**
 * delete_dnodeint_at_index - Makes the sum of two numbers
 * @head: First operand
 * @index: Second operand
 *
 * Return: The sum of the two parameters
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *pnt;

	if (head == NULL || *head == NULL)
		return (-1);

	i = 0;
	pnt = *head;
	while ((i != index) && pnt)
	{
		i++;
		pnt = pnt->next;
	}

	if (pnt)
	{
		if (index == 0)
		{
			*head = (*head)->next;
			if (*head)
				(*head)->prev = NULL;
			free(pnt);
		}
		else
		{
			pnt->prev->next = pnt->next;
			if (pnt->next)
				pnt->next->prev = pnt->prev;
			free(pnt);
		}
		return (1);
	}
	return (-1);
}
