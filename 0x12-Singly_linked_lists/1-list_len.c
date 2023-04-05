#include "lists.h"

/**
 * list_len - the no. of linked lists
 * @h: head
 * Return: no of nodes with size_t
 */
size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
