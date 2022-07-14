/* Author: Raymond Lukwago A.R */
#include "main.h"

/**
* string_toupper - Changes all lowercase to uppercase
* @n: String to be changed
* Return: Character string converted to uppercase
*/
char *string_toupper(char *n)
{
	int index;

	for (index = 0; n[index]; index++)
	{
		if (n[index] >= 97 && n[index] <= 122)
			n[index] -= 32;
	}
	return (n);
}
