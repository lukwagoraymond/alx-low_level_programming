#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Function used as an entry point
* Return: Always returns zero when programme terminates successfully
*/

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		printf("%i is positive\n", n);
	}
	return (0);
}
