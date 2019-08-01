#include "lists.h"
#include <stdlib.h>


/**
 * _strdup - Returns a pointer to a copy of the string given as a parameter.
 * @str: String given as a parameter.
 * Return: char
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
		leng = 0;
		while (str[leng] != '\0')
		{
			leng++;
		}

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
 * _strlen - Function that returns the length of a string.
 *
 * @s: char *s String to be processed
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
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

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = _strdup(str);
	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;
	return (new);
}
