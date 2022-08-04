#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - Main program to perform the calculator
*		operations
* @argc:	Number of arguments in the program
* @argv:	array of pointers to arguments
* Return:	Returns result of calculation
*/
int main(int argc, char **argv)
{
	int (*f)(int, int);
	int a, b, result;

	if (argc != 4)
		printf("Error\n"), exit(98);

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL)
		printf("Error\n"), exit(99);

	result = f(a, b);
	printf("%d\n", result);
	return (0);
}

