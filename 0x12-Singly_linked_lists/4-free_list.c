#include "lists.h"

/**
 * free_list - clearing mem of element
 * @head: points to head element
 * Return: nill
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
