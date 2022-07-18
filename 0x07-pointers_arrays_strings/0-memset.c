/* Author: Raymond Lukwago */

#include "main.h"
/**
* _memset - fills memory with a constant byte
* @s: memory area (s) to be filled
* @b: constant byte to fill with
* @n: This is the length of the array
* Return: Pointer to memory area (s)
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		*(s + index) = b;
	}
	return (s);
}

