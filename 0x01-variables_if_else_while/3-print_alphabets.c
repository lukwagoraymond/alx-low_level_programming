#include <stdio.h>
/**
* main - Function used as an entry point
* Return: Always returns zero when programme terminates successfully
*/

int main(void)
{
	int i, j;

	for (i = 65, j = 97; i <= 90, j <= 122; i++, j++)
	{
		putchar(j);
		putchar(i);
	}
	putchar(10);
	return (0);
}
