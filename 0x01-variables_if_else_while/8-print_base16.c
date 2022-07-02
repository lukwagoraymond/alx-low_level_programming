#include <stdio.h>
/**
* main - Function used as an entry point
* Return: Always returns zero when programme terminates successfully
*/
int main(void)
{
	int i;

	char jj;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	for (jj = 'a'; jj <= 'f'; jj++)
		putchar(jj);

	putchar(10);

	return (0);
}
