#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array, and initializes it with a specific char.
 * @size: The size of the array
 * @c: Specific char to initialize the array
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str = NULL, *ans = NULL;

	if (size == 0)
		return (NULL);

	str = (char *)malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);

	ans = str;

	while (size-- > 0)
		*str++ = c;

	return (ans);
}
