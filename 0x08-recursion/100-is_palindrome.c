/* Author: Raymond Lukwago */

#include "main.h"
/**
* str_length -	Checks for the length of the string
* @s:			String to be checked for length
* Return:		integer of string length
*/
int str_length(char *s)
{
	int length = 0;

	if (*(s + length))
	{
		length++;
		length += str_length(s + length);
	}

	return (length);
}

/**
* check_palindrome -	checks if string is a palindrome
* @s:					The string to be checked
* @length:				The length of the string
* @i:					The index of the string to be checked
* Return:				If string palindrome returns (1)
*						If string isn't palindrom returns (0)
*/
int check_palindrome(char *s, int length, int i)
{
	if (s[i] == s[length / 2])
		return (1);

	if (s[i] == s[length - i - 1])
		return (check_palindrome(s, length, i + 1));

	return (0);
}

/**
* is_palindrome - Checks if string is palindrome
* @s:		String to be checked
* Return:	Return (1) if string is palindrom
*/
int is_palindrome(char *s)
{
	int i = 0;
	int length = str_length(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, length, i));
}




















