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
	while (s[len] != '\0')
	{
		++len;
	}
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
	int name_length = 0, owner_length = 0, i;
	dog_t *puppie;

	name_length = _strlen(name);
	owner_length = _strlen(owner);

	puppie = malloc(sizeof(dog_t));
	if (puppie == NULL)
	return (NULL);


	puppie->name = malloc((name_length) * sizeof(puppie->name));
	if (puppie == NULL)
		return (NULL);
	for (i = 0; i < (name_length); i++)
		puppie->name[i] = name[i];

	puppie->age = age;

	puppie->owner = malloc((owner_length) * sizeof(puppie->owner));
	if (puppie == NULL)
		return (NULL);
	for (i = 0; i < (owner_length); i++)
		puppie->owner[i] = owner[i];

	return (puppie);
}
