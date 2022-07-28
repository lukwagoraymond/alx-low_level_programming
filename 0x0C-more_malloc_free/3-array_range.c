/* Author: Raymond Lukwago */

#include "main.h"
#include <stdlib.h>
/**
 * array_range -	creates an array of integers
 * @min:			minimum value in array of integers
 * @max:			maximum value in array of integers
 * Return:			pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *ptrA;
	int size;
	int i;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	ptrA = malloc(size * sizeof(int));

	if (ptrA != NULL)
	{
		for (i = 0; i < size; i++)
			*(ptrA + i) = min++;
	}
	else
		return (NULL);

	return (ptrA);
}
