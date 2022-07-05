#include "main.h"

/**
* _abs - Computes absolute number of integer
* @n: The interger to be checked
*
* Return: If n then absolute
*/
int _abs(int)
{
	int n;

	if (n <= 0 || n >= 0)
		return (n);
	else
		return (-n);
}
