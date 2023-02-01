#include "search_algos.h"
#include <math.h>

/**
* jump_search - Searches for a Value in a sorted array of integers
*				using Jump Search Algorithm
* @array: Pointer to the first element of the array to search in
* @size: The number of elements in array
* @value: The value to search for
* Return: The first index of value otherwise -1
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i, start = 0, end = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	while (array[end] < value && end < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)(start), (int)array[start]);
		if (array[end] == value)
			return (end);
		start = end;
		end += sqrt(size);
	}
	printf("Value checked array[%d] = [%d]\n", (int)(start), (int)array[start]);
	printf("Value found between indexes [%d] and [%d]\n", (int)start, (int)end);

	for (i = start; i <= end && i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, (int)array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
