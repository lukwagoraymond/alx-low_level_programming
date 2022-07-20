/* Author: Raymond Lukwago */

#include "main.h"
/**
* _strlen_recursion - Prints length of string
* @s: Pointer to string length
* Return: Returns the length of string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
