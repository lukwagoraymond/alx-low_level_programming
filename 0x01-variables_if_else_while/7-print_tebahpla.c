#include <stdio.h>
/**
* main - Function used as an entry point
* Return: Always returns zero when programme terminates successfully
*/
int main(void)
{
	int i;

	i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar(10);
	return (0);
}
