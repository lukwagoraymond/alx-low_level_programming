/* Author:	Raymond Lukwago A.R */
#include "lists.h"
#include <stdlib.h>

/**
* free_listint -	Frees a listint list
* @head:			Pointer to the start of the list
*/
void free_listint(listint_t *head)
{
	listint_t *current_node, *next_node;

	current_node = head;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node->n);
		free(current_node);
		current_node = next_node;
	}
}
