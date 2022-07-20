/* Author: Raymond Lukwago */

#include "main.h"
/**
* _sqrt_recursion - Calculates square root of number
* @n:		Base integer of the number
* Return:	Returns Calculated sqrt integer of number
*			or a (-1) for non square numbers
*/
int _sqrt_recursion(int n)
{
	return (sqrt_test(n, 1));
}

/**
* sqrt_test -	Tests if guessed number is close to
*				division (Number / guessed number)
* @n:			Base number to determine square root
* @g:			Guessed Number of the square root of
*				number (n)
* Return:		Returns closest guessed number to
*				divsion (Number / guessed number)
*/
int sqrt_test(int n, int g)
{
	if (g > (n / g))
		return (-1);

	if (g == (n / g))
		return (g);

	return (sqrt_test(n, g + 1));
}
