#include <stdio.h>
/**
* main - Function used as an entry point
* Return: Always returns zero when programme terminates successfully
*/
int main(void)
{
	int i, j, z;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (z = j + 1; z < 10; z++)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				putchar((z % 10) + '0');

				if (i == 7 && j == 8 && z == 9)
					continue;
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
