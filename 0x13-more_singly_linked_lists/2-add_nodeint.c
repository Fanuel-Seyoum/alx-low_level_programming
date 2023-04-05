#include "lists.h"
#include <string.h>

/**
 * add_nodeint - A function adding node @ the beiginning
 * @head: list_t's pointer
 * @n: int data
 * Return: new element's address or NULL for failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *added_node;

	added_node = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = added_node;
	return (*head);
}
