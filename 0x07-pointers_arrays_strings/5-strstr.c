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
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
