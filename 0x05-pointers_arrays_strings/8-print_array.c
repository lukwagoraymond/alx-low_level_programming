#include "main.h"
/**
* print_array - Prints elements of an array
* @a: Array of integers
* @n: Number of elements to be printed
*/
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == (n - 1))
			continue;
		printf(", ");
	}

	printf("\n");
}

