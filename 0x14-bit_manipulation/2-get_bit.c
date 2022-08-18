/* Author: Raymond Lukwago */
#include "main.h"
#include <stdlib.h>

/**
* get_bit -	Gets bit at particular index
* @n:		number to be searched
* @index:	Position of the bit being searched
* Return:	Bit (1) or (0) else (-1) for error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned long int max_bits;

	/*validate index if not out of range*/
	max_bits = ((sizeof(unsigned long int)) * 8);
	if (index > max_bits)
		return (-1);

	bit = ((n >> index) & 1);
	return (bit);
}
