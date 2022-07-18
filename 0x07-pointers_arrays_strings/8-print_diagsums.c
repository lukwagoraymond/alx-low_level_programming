/* Author: Raymond Lukwago */

#include "main.h"
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

	for (i = 0; i < size; i++)
	{
		principal += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		secondary += a[i];
		a -= size;
	}

	printf("%d, %d\n", principal, secondary);
}
