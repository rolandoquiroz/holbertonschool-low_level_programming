#include "lists.h"
/**
 * free_list - function that frees a listint_t list
 * @head: pointer to head of the listint_t list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
