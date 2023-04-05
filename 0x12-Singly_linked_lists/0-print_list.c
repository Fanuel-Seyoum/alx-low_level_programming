#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints the linked list
 * @h: points the head of the list
 * Return: no of nodes in z list
 */
size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);

		h = h->next;
		nodes++;
	}
	return (nodes);
}
