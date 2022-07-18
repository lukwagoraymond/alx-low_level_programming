/* Author: Raymond Lukwago */

#include "main.h"
/**
* _strpbrk - Finds 1st character matching
* @s:	String to be compared to
* @accept:	string of bytes to compare from
* Return:	Pointer to character in s matching accept
*/
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s);
		}

		s++;
	}

	return (0);
}
