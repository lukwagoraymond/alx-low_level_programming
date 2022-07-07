#include "main.h"

/**
* print_line - prints straight line
*
* @n: Length of the straight line
*/
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i <= 0)
			_putchar(10);
		_putchar(95);
	}
	_putchar(10);
}
