/* Author: Raymond Lukwago A.R */
#include "main.h"

/**
* cap_string - Capitalises under specific conditions
* @n: String to be changed
* Return: Character string converted to uppercase
*/
char *cap_string(char *n)
{
	char aux[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int length = 13; /* length of the cat[] */
	int a; /* size of the n[] string */
	int index; /* index to loop check for cat[] in n[] */

	for (a = 0; n[a]; a++)
	{
		for (index = 0; index < length; a++)
		{
			if ((a == 0 || n[a - 1] == aux[index]) && (n[a] >= 97 && n[a] <= 122))
				n[a] -= 32;
		}
	}
	return (n);
}
