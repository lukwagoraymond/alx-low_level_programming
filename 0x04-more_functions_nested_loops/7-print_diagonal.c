#include "main.h"

/**
* print_diagonal - prints diagonal line
*
* @n: Length of the diagonal line
*/
void print_diagonal(int n)
{
	int i, k

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (k = 0; k < i; k++)
				_putchar(' '); /* ASCII for Space Bar */
			_putchar('\\'); /* ASCII for Black lash */
			if (i == n - 1)
				continue;
			_putchar(10); /* ASCII for New line */
		}
	}
	_putchar(10);
}

