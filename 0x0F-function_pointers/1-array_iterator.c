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
	size_t = i;
	i = 0;
	
	if (action != NULL && array != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
