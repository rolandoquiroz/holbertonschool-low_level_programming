#include "lists.h"
/**
 * free_dlistint - Makes the sum of two numbers
 * @head: First operand
 *
 * Return: The sum of the two parameters
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *pnt;

	if (head == NULL)
		return;
	while (head)
	
		pnt = head->next;
		free(head);
		if (pnt == NULL)
			return;
		pnt->prev = NULL;
		head = pnt;
	}
}
