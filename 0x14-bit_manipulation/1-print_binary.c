/* Author: Raymond Lukwago */
#include "main.h"
#include <stdlib.h>

/**
* print_binary -	Converts integer to binary
* @n:				Integer to be converted
*/
void print_binary(unsigned long int n)
{
	int length = 0;
	int var;
	unsigned long int n_copy = n;

	/* length of the integer */
	while (n_copy > 0)
	{
		length++;
		n_copy >>= 1;
	}
	length -= 1;

	for (; length >= 0; length--)
	{
		var = n >> length;
		if (var & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
