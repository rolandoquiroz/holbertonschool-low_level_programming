#include "dog.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _strlen - function that returns the length of a string.
 * @s: char *s String to be processed
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s)
		s++, len++;
	return (len);
}

/**
 * new_dog - Function that creates a new type dog struct.
 * @name: Parameter name.
 * @age: Parameter age.
 * @owner:Paramter owner.
 * Return: A type struct dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppie = NULL;
	unsigned int size_of_char = 0, len_of_name = 0, len_of_owner = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	puppie = malloc(sizeof(dog_t));
	if (puppie == NULL)
		return (NULL);

	size_of_char = sizeof(char);

	len_of_name = _strlen(name);
	puppie->name = malloc((len_of_name + 1) * size_of_char);
	if (puppie->name == NULL)
	{
		free(puppie);
		return (NULL);
	}

	len_of_owner = _strlen(owner);
	puppie->owner = malloc((len_of_owner + 1) * size_of_char);
	if (puppie->owner == NULL)
	{
		free(puppie->name);
		free(puppie);
		return (NULL);
	}

	for (i = 0; i < len_of_name + 1; i++)
		puppie->name[i] = name[i];

	puppie->age = age;

	for (i = 0; i < len_of_owner + 1; i++)
		puppie->owner[i] = owner[i];

	return (puppie);
}
