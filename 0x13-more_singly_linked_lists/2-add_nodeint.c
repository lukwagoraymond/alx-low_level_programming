/* Author:	Raymond Lukwago A.R */
#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint -	Adds a node at the beginning of a linked list
* @n:			integer contained in the node to be included
* @head:		Pointer to the 1st head pointer of the linked list
* Return:		Returns the number of nodes
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (n == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (new_node->n == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
