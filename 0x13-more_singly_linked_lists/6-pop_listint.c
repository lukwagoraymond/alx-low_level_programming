/* Author:	Raymond Lukwago A.R */
#include "lists.h"
#include <stdlib.h>

/**
* pop_listint -	Deletes the head node of a linked list
* @head:		Double pointer to the list
* Return:		Returns value in deleted node
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));

	tmp = *head;
	if (tmp == NULL || *tmp == NULL)
		return (0);

	*head = tmp->next;

	return (tmp->n);
}
