#include "lists.h"
#include <stddef.h>

/**
 * list_len - print all element of a linked list
 * @h: head of the linked list
 *
 * Return: number of element in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
