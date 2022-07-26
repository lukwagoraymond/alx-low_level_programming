/* Author: Raymond Lukwago */

#include "main.h"
#include <stdlib.h>

/**
* alloc_grid -	Outputs a 2 Dimensional Array
* @width:		Width to represent columns
* @height:		Heigth to represent rows
* Return:		Pointer to a 2 Dimensional Array
*/
int **alloc_grid(int width, int height)
{
	int rows = 0;
	int cols = 0;
	int len_rows = 0;
	int len_cols = 0;
	int total_len;
	int **ptrM;

	while (*(width + cols))
		len_cols++, cols++;

	while (*(height + rows))
		len_rows++, rows++;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	total_len = (len_cols * len_rows);

	*ptrM = malloc(total_len * sizeof(int));

	if (*ptrM == NULL)
		return (NULL);

	for (rows = 0; rows < len_rows; rows++)
	for (cols = 0; cols < len_cols; cols++)
		_putchar(*(*(ptrM + rows) + cols));

	return (*ptrM);
}
