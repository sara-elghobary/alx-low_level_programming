#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
size_t how_much_nodes = 0;

while (h != NULL)
{
how_much_nodes++;
h = h->next;
}
return (how_much_nodes);

}
