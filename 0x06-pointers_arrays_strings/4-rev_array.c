/* Author: Raymond Lukwago A.R */
#include "main.h"

/**
* reverse_array - Reverses an integer array
* @a: Pointer to the array to be reversed
* @n: Size of the array to be reversed
*/
void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[index] = tmp;
	}
}
