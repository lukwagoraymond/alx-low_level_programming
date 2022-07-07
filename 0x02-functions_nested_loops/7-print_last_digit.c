#include "main.h"

/**
* print_last_digit - Prints last number of number
* @j: The number tobe checked.
*
* Return: Value of the last number
*/
int print_last_digit(int j)
{
	int last_digit = j % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
