/* Author: Raymond Lukwago */

#include "main.h"
#include <stdlib.h>

/**
* malloc_checked -	Allocates memory using malloc
* @b:				number of bytes to add
* Return:			pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *ptrA;

	ptrA = malloc(b);

	if (ptrA == NULL)
		exit(98);

	return (ptrA);
}
