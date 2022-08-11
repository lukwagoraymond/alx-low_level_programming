#include "main.h"

/**
* _strlen - length of a string
*
* @s: count for lenght of string
* Return: Return lens if successful
*/
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}
