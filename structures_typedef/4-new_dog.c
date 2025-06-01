#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

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
	unsigned int size_of_char = 0, size_of_name = 0, size_of_owner = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	puppie = malloc(sizeof(dog_t));
	if (puppie == NULL)
		return (NULL);

	size_of_char = sizeof(char);

	size_of_name = sizeof(name);
	puppie->name = malloc(size_of_name * size_of_char);
	if (puppie->name == NULL)
	{
		free(puppie);
		return (NULL);
	}

	size_of_owner = sizeof(owner);
	puppie->owner = malloc(size_of_owner * size_of_char);
	if (puppie->owner == NULL)
	{
		free(puppie->name);
		free(puppie);
		return (NULL);
	}

	for (i = 0; i < size_of_name; i++)
		puppie->name[i] = name[i];

	puppie->age = age;

	for (i = 0; i < size_of_owner; i++)
		puppie->owner[i] = owner[i];

	return (puppie);
}
