/* Author: Raymond Lukwago */

#include "main.h"
#include <stdio.h>
/**
* print_diagsums - Prints Diagonals of Matrix
* @size: Size of the matrix
* @a:	Pointer to 2D Matrice
*/
void print_diagsums(int *a, int size)
{
	int principal = 0;
	int secondary = 0;
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				principal += *(*a + i) + j;

			if ((i + j) == (n - 1))
				secondary += *(*a + i) + j;
		}
	}
	printf("%d, %d\n", principal, secondary);
}
