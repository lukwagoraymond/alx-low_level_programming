#include "main.h"

/**
* print_times_table - Prints times table of the input
*
* @a: The value of the times table to be printed.
*/
void print_times_table(int a)
{
	int n, m, p;

	if (n >= 0 && n <= 15)
	{
		for (n = 0; n <= n; n++)
		{
			for (m = 1; m <= n; m++)
			{
				_putchar(44);
				_putchar(32);

				p = n * m;

				if (p <= 99)
					_putchar(32);
				if (p <= 9)
					_putchar(32);
				if (p >= 100)
				{
					_putchar((p / 100) + '0');
					_putchar(((p / 10)) + '0');
				}
				else if (p <= 99 && p >= 10)
					_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
			_putchar(10);
		}
	}

}

