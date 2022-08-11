#include "lists.h"

/**
 * add_node_end - add a node the beginning of a linked list
 * @head: pointer reference to the head of the linked list
 * @str: pointer to the str to be added to the node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_nod = *head;
	list_t *new_nod = malloc(sizeof(list_t));

	if (!new_nod)
		return (NULL);

	new_nod->str = strdup(str);
	new_nod->len = strlen(str);
	new_nod->next = NULL;

	if (*head == NULL)
	{
		*head = new_nod;
		return (new_nod);
	}

	while (last_nod->next)
		last_nod = last_nod->next;

	last_nod->next = new_nod;

	return (new_nod);
}
