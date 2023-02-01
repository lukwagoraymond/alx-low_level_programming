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
	size_t low = 0, high = size - 1, pos = 0;

	if (array == NULL)
		return (-1);

	pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
	if (pos >= size)
		printf("Value checked array[%d] is out of range\n", (int) pos);
	while ((array[high] != array[low]) && (value >= array[low]) && (value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%d] = [%d]\n", (int) pos, array[pos]);

		if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
		else
			return (pos);
	}
	if (array[low] == value)
		return (low);
	return (-1);
}











