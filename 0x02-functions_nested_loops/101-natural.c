#include <stdio.h>

/**
* main - Lists all natural numbers below 1024 (excluded)
*
* Return: Always 0 if successful
*/
int main(void)
{
	int i, sum, sum1, sum2;

	sum = 0;
	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0 || (1 % 5) == 0)
			sum += i;
			sum1 += i;
	}
	sum2 = sum + sum1;
	printf("%d\n", sum2);
	return (0);
}
