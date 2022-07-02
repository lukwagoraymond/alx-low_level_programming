#include <stdio.h>
/**
* main - Function used as an entry point
* Return: Always returns zero when programme terminates successfully
*/

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		putchar(10);
	}
	return (0);
}
