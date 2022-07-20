/* Author: Raymond Lukwago */

#include "main.h"
#include <stdio.h>
/**
* _sqrt_recursion - Calculates square root of number
* @n:		Base integer of the number
* Return:	Returns Calculated sqrt integer of number
*			or a (-1) for non square numbers
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_test(1, n));
}

/**
* sqrt_test -	Tests if guessed number is close to
*				division (Number / guessed number)
* @x:			Base number to determine square root
* @g:			Guessed Number of the square root of
*				number (x)
* Return:		Returns closest guessed number to
*				divsion (Number / guessed number)
*/
int sqrt_test(int x, int g)
{
	if (g == (x / g))
		return (g);

	if (g > (x / g))
		return (-1);

	return (sqrt_test(x, g + 1));
}
