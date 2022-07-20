/* Author: Raymond Lukwago */

#include "main.h"
/**
* _puts_recursion - Prints string with newline at end
* @s: Pointer to string to be printed to stdout
*/
void _puts_recursion(char *s)
{
	if (s = '\0')
		_putchar('\n');

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
