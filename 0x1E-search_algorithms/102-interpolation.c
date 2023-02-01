#include "search_algos.h"

/**
* interpolation_search - Searches for a value in a sorted array
*						of integers of uniform distribution using
*						interpolation search.
* @array: A pointer to the first element of the array to search.
* @size: The number of elements in the array.
* @value: The value to search for.
* Return: If the value is not present or the array is NULL, -1.
*         Otherwise, the first index where the value is located
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0, h = size - 1, pos = 0;

	if (array == NULL)
		return (-1);

	pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
	if (pos >= size)
		printf("Value checked array[%d] is out of range\n", (int) pos);
	while ((array[h] != array[l]) && (value >= array[l]) && (value <= array[h]))
	{
		pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		printf("Value checked array[%d] = [%d]\n", (int) pos, array[pos]);

		if (array[pos] < value)
			l = pos + 1;
		else if (array[pos] > value)
			h = pos - 1;
		else
			return (pos);
	}
	if (array[l] == value)
		return (l);
	return (-1);
}
