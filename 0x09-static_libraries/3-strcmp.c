/* Author: Raymond Lukwago A.R */
#include "main.h"

/**
* _strcmp - compares two arrays
* @s1: First array s1[] to be compared
* @s2: Second array s2[] to be compared
* Return:	if s1 == s2 - Zero is returned
*			if s1 > s2 - A negative integer is returned
*			if s1 < s2 - A positive integer is returned
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
