/* Author: Raymond Lukwago */

#include "main.h"
/**
* _strspn - gets the length of a prefix substring
* @s:	String to be compared to
* @accept:	string of bytes to compare from
* Return:	Number of bytes similar among (2)
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	
	i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && s[i] != accept[j]; j++)

		if (accept[j] == '\0')
			return (i);
	}

	return (i);
}
