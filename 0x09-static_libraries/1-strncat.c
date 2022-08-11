/* Author: Raymond Lukwago A.R */

#include "main.h"

/**
* _strncat - concatenates two strings
* @src: String to be appended
* @dest: String to be appended to
* @n: number of bytes from src string
* Return: Returns a string joined together
*/
char *_strncat(char *dest, char *src, int n)
{
	int length = 0;

	int i;

	while (dest[length])
		length++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[length] = src[i];
		length++;
	}

	dest[length] = '\0';

	return (dest);
}
