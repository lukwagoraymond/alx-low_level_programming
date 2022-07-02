#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Function used as an entry point
* Return: Always returns zero when programme terminates successfully
*/

main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	int i;

	i = n % 10;

	if (i > 5)
	{
		        printf("The Last digit of %i is %i and is greater than 5\n", n, i);
	}
	else if (i < 6 && i > 0)
	{
		        printf("The Last digit of %i is %i and is 0\n", n, i);
	}
	else
	{
		        printf("The Last digit of %i is %i and is less than 6 and not 0\n", n, i);
	}
	return (0);
}
