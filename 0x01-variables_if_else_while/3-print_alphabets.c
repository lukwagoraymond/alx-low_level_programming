#include <stdio.h>
/**
* main - Function used as an entry point
* Return: Always returns zero when programme terminates successfully
*/

int main(void)
{
	int i;
	int j;

	for (i = 97; i <= 122; i++)
		putchar(i);

	for (j = 65; i <= 90; j++)
		putchar(j);

	putchar(10);
	return (0);
}
