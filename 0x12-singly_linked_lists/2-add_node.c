#include "lists.h"

/**
 * add_node - add a node the beginning of a linked list
 * @head: pointer reference to the head of the linked list
 * @str: pointer to the str to be added to the node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *_node = malloc(sizeof(list_t));

	if (!_node)
		return (NULL);

	_node->str = strdup(str);
	_node->len = strlen(str);
	_node->next = *head;
	*head = _node;

	return (_node);
}
