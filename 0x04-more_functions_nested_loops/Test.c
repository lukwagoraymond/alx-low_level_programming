#include <stdio.h>

/**
* Function that will print out straight line
*/
int main(void)
{
	int i, j, k;
		
	printf("Input number of lines:\n");
	scanf("%d", &j);
	
	if (j > 0)
	{
		for (i = 1; i <= j; i++)
		{			
			for (k = 0; k < j; k++)
				putchar('#');
				putchar(10);
		}
	}
	putchar(10);
	return (0);
}
