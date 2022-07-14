/* Author: Raymond Lukwago A.R */
#include "main.h"

/**
* reverse_array - Reverses an integer array
* @a: Pointer to the array to be reversed
* @n: Size of the array to be reversed
*/
void reverse_array(int *a, int n)
{
	int tmp[n];
	int i;
	
	for (i = 0; i < n; i++)
		tmp[n - 1 - i] = a[i];
		
	for (i = 0; i < n; i++)
		a[i] = tmp[i];

}
