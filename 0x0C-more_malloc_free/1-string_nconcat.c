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
{{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len_1 = 0;
	unsigned int len_2 = 0;
	unsigned int total_len = n;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + i))
		len_1++, i++;

	while (*(s2 + j))
		len_2++, j++;

	total_len = len_1 + len_2;

	concat = malloc(sizeof(char) * (total_len + 1));

	if (concat == NULL)
		return (NULL);

	total_len = 0;

	for (i = 0; s1[i]; i++)
		*(concat + total_len) = *(s1 + i);

	for (i = 0; i < n && s2[i]; i++)
		*(concat + total_len) = *(s2 + i);

	*(concat + total_len) = '\0';

	return (concat);
}
