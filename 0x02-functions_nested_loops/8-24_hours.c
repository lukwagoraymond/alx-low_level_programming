#include "main.h"

/**
* jack_bauer - Prints every minute of day
*
*/

void jack_bauer(void)
{
	int hr;

	for (hr = 0; hr < 24; hr++)
	{
		int min;

		for (min = 0; min < 60; min++)
		{
			_putchar((hr / 10));
			_putchar((hr % 10));
			_putchar(58);
			_putchar((min / 10));
			_putchar ((min % 10));
			_putchar (10);
		}
	}

}
