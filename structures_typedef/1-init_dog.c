#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Function that initialize a variable of type struct dog
 * @d: Name of the variable
 * @name: Parameter name
 * @age: Parameter age
 * @owner: Parameter owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
