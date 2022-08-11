#include "dog_Alt.h"
#include <stdio.h>

/**
* print_dog - Function to print data structure out
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
		
	(d->name == NULL) ? (printf("Name: (nil)\n")) : (printf("%s\n", d->name);
	
	d->age == NULL) ? (printf("Age: (nil)\n")) : (printf("%.6f\n", d->age);
	
	d->owner == NULL) ? (printf("Owner: (nil)\n")) : (printf("%s\n", d->owner);
	
}
