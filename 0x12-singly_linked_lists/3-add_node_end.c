#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - Function that returns the length of a string.
 * @s: char *s String to be processed
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		++len;
	}
	return (len);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the pointer of beginning of list_t
 * @str: string to be added
 * Return: New node added
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(new->str);
	new->next = NULL;
	if ((*head) == NULL)
		(*head) = new;
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (new);
}
