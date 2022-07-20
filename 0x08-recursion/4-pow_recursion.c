/* Author: Raymond Lukwago */

#include "main.h"
/**
* _pow_recursion - Calculates number to certain power
* @x: Base integer of the number
* @y: The power to calculate to
* Return: Returns Calculated power integer of number
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));

	else
		return (1);

}
