/* Author Raymond Lukwago */

#include "function_pointers.h"
/**
* array_iterator -	Executes function as a parameter on each
*					element of an array
* @array:			The pointer to an array address
* @size:			The size of the array
* @action:			function pointer casted to int pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
