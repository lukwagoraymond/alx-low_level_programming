/* Author: Raymond Lukwago */

#include "main.h"
#include <stdlib.h>

/**
* word_count -	counts the number of words
*				& characters in a string
* @str:			The string to be counted
* Return:		Returns an array containing
*				word count & letter count in
*				each word
*/
int word_count(char *str)
{
	int i, j; /* i for moving through string & j used as benchmark index */
	int size = 1; /* 2nd position in len array */
	int len[0]; /* Storing the elements of word count & letter count in words */

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			continue;

		j = i;

		for (; str[i] != ' ' && str[i]; i++)
			i++;

		if (i > j)
			len(size++) = i - j; /* Find character numbers in each word + total words */

		if (!str[i])
			break;
	}

	len[0] = size - 1;

	return (len); /* len[word_count, letter_count_in words] */
}

/**
* strtow	-	splits string into words
* @str:			String to be split
* Return:		Returns 2D array of split
*				string per word on each
*				line
*/
char **strtow(char *str)
{
	char **arr;
	int i;
	int j = 0;
	int k = 1;
	int *len;

	len = word_count(str);

	if (!len[0]) /* if word_count == zero */
		return (NULL);

	arr = malloc((len + 1) * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			continue;

		arr[k - 1] = malloc(len[k - 1] + 1) * sizeof(char));

		j = 0;
		while (str[i] != '\0' && str[i])
			arr[k - 1] = str[i];
			j++, i++;

		arr[k++][j] = '\0';

		if (!str[i])
			break;
	}
	arr[len[0]] = NULL;
	return (arr);
}
