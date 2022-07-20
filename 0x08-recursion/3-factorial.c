/* Author: Raymond Lukwago */

#include "main.h"
/**
* factorial - Calculates the factorial of a number
* @n: Number to inputed
* Return: Returns factorial integer of number
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if ((n >= 0) && (n <= 1))
		return (1);

	return (n * factorial(n - 1));
}
