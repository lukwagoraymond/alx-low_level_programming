#include <stdio.h>

/**
* main - Lists all natural numbers below 1024 (excluded)
*
* Return: Always 0 if successful
*/
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (1 % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
