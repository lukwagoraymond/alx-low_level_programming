/* Author: Raymond Lukwago */

#include "main.h"
#include <stdlib.h>

/**
* create_array -	Creates an array of characters 'c'
* @size:			Length of the array to be created
* @c:				Character to be put in array
* Return:			Returns pointer to an array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptrA;

	if (size <= 0) /* validate size input */
		return (NULL);

	ptrA = malloc(size * sizeof(char)); /* Allocate Memory */

	if (ptrA == 0)	/* Validate Memory */
		return (NULL);

	else

		for (i = 0; i <= size; i++)
			*(ptrA + i) = c;

	return (ptrA);

}
