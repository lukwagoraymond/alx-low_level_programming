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

	if ((n % 10) > 5)
	{
		printf("The Last digit of %i is %i and is greater than 5\n", n, i);
	}
	else if ((n % 10) < 6 && (n % 10) > 0)
	{
		printf("The Last digit of %i is %i and is 0\n", n, i);
	}
	else
	{
		printf("The Last digit of %i is %i and is less than 6 and not 0\n",
				n, n % 10);
	}
	return (0);
}
