/*This main.h contains the print_alphabet function prototype*/
#include "main.h"

/**
* main - Entry Function to the body of this code
* Return: If successful returns (0) otherwise returns (1)
*/
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar(10);
	return (0);
}
