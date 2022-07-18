/* Author: Raymond Lukwago */

#include "main.h"
/**
* _strstr - Finds 1st character matching
* @haystack:	String to be scanned
* @needle:	string to be searched in haystack
* Return:	Pointer to 1st occurence in haystack
*/
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
}
