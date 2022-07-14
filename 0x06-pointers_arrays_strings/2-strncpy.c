/* Author: Raymond Lukwago A.R */
#include "main.h"

/**
* _strncpy - copies one string to another
* @dest: The destination pointer carrying the copied String
* @src: Pointer carrying String to be copied
* @n: Number of bytes from src to be copied
* Return: Returns a string copied from src
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n || src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\n';

	return (dest);
}
