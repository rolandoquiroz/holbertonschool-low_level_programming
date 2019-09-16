#include "lists.h"
/**
 * sum_dlistint - Makes the sum of two numbers
 * @head: First operand
 *
 * Return: The sum of the two parameters
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *pnt;
	int s = 0;

	if (head == NULL)
		return (0);
	pnt = head;
	while (pnt)
	{
		s = s + pnt->n;
		pnt = pnt->next;
	}
	return (s);
}
