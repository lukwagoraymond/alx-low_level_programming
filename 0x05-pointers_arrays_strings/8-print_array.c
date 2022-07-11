#include "main.h"
#include <stdio.h>
/**
* print_array - Prints elements of an array
* @a: Array of integers
* @n: Number of elements to be printed
*/
void print_array(int *a, int n)
{
	int index;

	index = 0;

	while (index < n)
	{
		if (index != n - 1)
			printf("%d, ", a[index]);
		else
			printf("%d", a[index]);
		index++;
	}
	putchar(10);
}

