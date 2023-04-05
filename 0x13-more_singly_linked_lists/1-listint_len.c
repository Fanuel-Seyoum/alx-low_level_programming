#include "lists.h"

/**
 * print_listint - The printer function.
 * @h: points to the end.
 *
 * Return: returns the number of nodes with the counter my_counter.
 */
size_t listint_len(const listint_t *h)
{
    size_t my_counter = 0;

    while (h != NULL)
    {
        my_counter++;
        h = h->next;
    }

    return (my_counter);
}