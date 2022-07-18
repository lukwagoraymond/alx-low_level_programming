/* Author: Raymond Lukwago */

#include "main.h"
/**
* _strchr - checks for 1st occurence of character
* @s:	String to be checked
* @c:	Character to check against
* Return:	If c found (pointer to 1st character
*			If c is not found - NULL
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}

	return (NULL);
}
