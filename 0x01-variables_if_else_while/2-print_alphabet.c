#include <stdio.h>
/**
* main - Function used as an entry point
* Return: Always returns zero when programme terminates successfully
*/

int main(void)
{

	int i = 97;

	while (i >= 97 && i <= 122)
	{
		putchar(i);
		putchar(10);
		i = i + 1;
	}
	return (0);
}
