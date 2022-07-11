#include "main.h"
/**
* print_array - Prints elements of an array
* @a: Array of integers
* @n: Number of elements to be printed
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;

		printf(", ");
	}

	printf(10);
}

