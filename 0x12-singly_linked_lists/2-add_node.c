#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - return the long from a string
 *  @s: pointer
 *  Return: int
 */
int _strlen(const char *s)
{
	int count = 0;

	while (s[count] != 0)
	{
		count++;
	}
	return (count);
}

/**
 * add_node - Function to add a new node at the beginning of list_t
 * @head: Pointer to the pointer to list_t
 * @str: Pointer to string to copy on to the node
 * Return: address of new element or null if not successful
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	len = _strlen(str);
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
