/* Author: Raymond Lukwago */

#include "main.h"
/**
* _print_rev_recursion - Prints string in reverse
* @s: Pointer to string to be printed to stdout
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);

}

