#include "dog_Alt.h"
#include <stdio.h>

/**
_strlen - Finds the length of a string
* @str: The string to be counted
* Return: The length of the string
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return (NULL);
	
	if (d->name == NULL)
		free(d->name);

	if (d->owner == NULL)
		free(d->owner);
	
	free(d);
}
