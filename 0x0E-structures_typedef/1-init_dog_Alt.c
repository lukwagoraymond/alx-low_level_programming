#include "dog_Alt.h"

/**
* init_dog - Function to initialise a variable of type
@d: Newly created data type.
@name: The name of the dog
@age: The age of the dog
@owner: The owner of the dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d) = name;
		(*d) = age;
		d -> owner;
	}
}
