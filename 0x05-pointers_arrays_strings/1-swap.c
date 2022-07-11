#include "main.h"

/**
* swap_int - Swap two numbers
* @a: Pointer variable of one number
* @b: Pointer variable of two number
*/
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;

}
