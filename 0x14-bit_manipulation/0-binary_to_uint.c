/* Author: Raymond Lukwago */
#include "main.h"

/**
* binary_to_uint -	Converts binary to integer
* @b:				Pointer to 1st address of string
* Return:			Returns decimal integer value
*/
unsigned int binary_to_uint(const char *b)
{
	int index = 0;
	unsigned int decimal = 0;
	int length = 0;
	int error = 0;

	/* Condition for (b) == NULL */
	if (b == NULL)
		return (error);

	/* Get length of the string */
	while (b[length] != '\0')
		length++;
	length -= 1;

	/* iterate string and if '1' then multiply by power of 2 */
	/* get power of 2 via binary (e.g. 1<<2 = 100 in binary = 4) */
	while (b[index])
	{
		if ((b[index] != '0') && (b[index] != '1'))
			return (error);

		if (b[index] == '1')
			decimal += (1 * (1 << length));

		length--;
		index++;
	}
	return (decimal);
}

/*
 * alternative method not using bitwise but a power of 2
 *
 *
 * unsigned int binary_to_uint(const char *b)
 *{
 *
 *	int len = 0, pow = 1;
 *	unsigned int sum = 0, error = 0;
 *
 *	if (b == NULL)
 *		return (error);
 *
 *	while (b[len] != '\0') // find string length
 *		len++;
 *	len -= 1;
 *
 *	while (len >= 0) // iterate from back of string
 *	{
 *		if ((b[len] != '0') && (b[len] != '1'))
 *			return (error);
 *
 *		if (b[len] == '1') // add appropriate power of 2 if '1'
 *			sum += pow;
 *
 *		pow *= 2; // update power of 2
 *		len--;
 *	}
 *
 *	return (sum);
 *}
 */
