#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
size_t how_much_nodes = 0;

while (h->next != NULL)
{
printf("%d", h->n);
how_much_nodes++;
h = h->next;
}
return (how_much_nodes);
}
