/* Author:	Raymond Lukwago A.R */
#include "lists.h"
#include <stdlib.h>

/**
* sum_listint -	Returns (n)th node in linked list
* @head:		Pointer to 1st node in linked list
* Return:		Sum of values in the linked list
*/
int sum_listint(listint_t *head);
{
	unsigned int i;
	listint_t tmp;

	tmp = malloc(sizeof(listint_t));
	tmp = head;

	if (tmp == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	return (tmp);
}
