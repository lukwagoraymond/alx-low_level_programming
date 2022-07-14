/* Author: Raymond Lukwago A.R */
#include "main.h"

/**
* reverse_array - Reverses an integer array
* @a: Pointer to the array to be reversed
* @n: Size of the array to be reversed
*/
void reverse_array(int *a, int n)
{
	int low;
	int high;
	int temp;
	int i;

	for (low = 0, high = n - 1; low < high; low++, high--)
	{
		temp = arr[low];
		arr[low] = arr[high];
		arr[high] = temp;
	}
}
