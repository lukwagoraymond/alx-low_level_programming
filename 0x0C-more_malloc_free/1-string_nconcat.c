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
	int i = 0;
	int j = 0;
	int len_1 = 0;
	int len_2 = 0;
	int total_len;
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

	concat = malloc((total_len * sizeof(char)) + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len_1; i++)
		*(concat + i) = *(s1 + i);

	for (j = 0; j < n && j < len_2, j++, i++)
		*(concat + i) = *(s2 + j);

	*(concat + i) = '\0';

	return (concat);
}
