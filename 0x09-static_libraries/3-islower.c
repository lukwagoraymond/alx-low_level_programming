/* main.h includes function prototype */
#include "main.h"

/**
* _islower - checks if character is lowercase
* @c: That character checked
*
* Return: 1 if character is lowercase & o otherwise
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
