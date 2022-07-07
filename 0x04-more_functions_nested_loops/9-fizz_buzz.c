#include <stdio.h>
/**
* main - Prints numbers from 1-100, but for,
*		 multiples of three print out Fizz
*		 multiples of five print out Buzz
*		 multiples of both print out FizzBuzz
*
* Return: Always 0 if programme is successful.
*/
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
			printf("FizzBuzz");

		else if ((n % 3) == 0)
			printf("Fizz");

		else if ((n % 5) == 0)
			printf("Buzz");

		else
			printf("%d", n);

		if (n == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}

