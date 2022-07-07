#include "main.h"

/**
* print_most_numbers - Lists numbers apart from 2 & 4
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) || (i == 4))
			continue;
		_putchar((i % 10) + '0');
	}
	_putchar(10);
}
