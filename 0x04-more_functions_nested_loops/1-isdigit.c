#include "main.h"
/**
 * _isupper - checks for digit
 *
 * @n: The digit to be checked
 * Return: Always 0 if successful otherwise 0
 */
 int _isdigit(int c);
 {
 	if((c >= 48) && (c <= 57))
 		return (1);	
 	else 
 		return (0);
 }
