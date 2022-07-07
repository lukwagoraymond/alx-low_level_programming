/*This main.h contains the print_alphabet function prototype*/
#include "main.h"

/**
* print_alphabet - Entry Function to the body of this code
* Return: If successful returns (0) otherwise returns (1)
*/
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
