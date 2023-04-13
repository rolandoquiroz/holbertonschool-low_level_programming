#include "lists.h"
/**
 * sum_dlistint - Makes the sum of two numbers
 * @head: First operand
 *
 * Return: The sum of the two parameters
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head != NULL; head = head->next)
		sum += head->n;

	return (sum);
}
