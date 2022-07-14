/* Author: Raymond Lukwago A.R */
#include "main.h"

/**
* leet -> a leet function
* @n: param n
* Return: a string
*/
char *leet(char *n)
{
	int a = 0, b, l = 5;
	char tems[5] = {'A', 'E', 'O', 'T', 'L'};
	char wizzy[5] = {'4', '3', '0', '7', '1'};

	while (n[a])
	{
		b = 0;

		while (b < l)
		{
			if (n[a] == tems[b] || n[a] - 32 == tems[b])
				n[a] = wizzy[b];
			b++;
		}
		a++;
	}
	return (n);
}
