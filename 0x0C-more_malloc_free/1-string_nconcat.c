/* Author: Raymond Lukwago */

#include "main.h"
#include <stdlib.h>

/**
* string_nconcat -	Concatenates two strings together
* @s1:				First of two strings to be concatenated
* @s2:				Second of two strings to be concatenated
* @n:				Number of bytes of s1 to copy from string
* Return:			pointer to concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		concat[len++] = *(s1 + i);

	for (i = 0; s2[i] && i < n; i++)
		concat[len++]   = *(s2 + i);

	*(concat + len) = '\0';

	return (concat);
}
