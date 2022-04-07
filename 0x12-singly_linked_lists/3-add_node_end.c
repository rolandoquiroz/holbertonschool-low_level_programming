#include "lists.h"
#include <stdlib.h>

/**
 * _strlen - return the lenggth from a string
 *  @s: pointer to first character of a string
 *
 *  Return: number of characters in a string
 */
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * _strdup - Returns a pointer to a copy of the string given as a parameter
 * @str: String given as a parameter
 *
 * Return: Pointer to a copy of str
 */
char *_strdup(const char *str)
{
	unsigned int i, leng;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		leng = _strlen(str);

		s = (char *)malloc((leng + 1) * sizeof(char));

		if (s == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < (leng + 1); i++)
			{
				s[i] = str[i];
			}
			return (s);
		}

	}
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: Pointer to the pointer of beginning of the list_t list
 * @str: String to be added
 *
 * Return: New node added
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL, *tmp_head = NULL;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = _strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		tmp_head = *head;
		while (tmp_head->next)
			tmp_head = tmp_head->next;

		tmp_head->next = new_node;
	}

	return (new_node);
}
