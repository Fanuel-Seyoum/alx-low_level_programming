#include "lists.h"
#include <stdio.h>

/**
 * print_listint - The printer function.
 * @h: points to the end.
 *
 * Return: returns the number of nodes with the counter my_counter.
 */
size_t print_listint(const listint_t *h)
{
    size_t my_counter = 0;


    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        my_counter++;
    }
    

    return (my_counter);
}
