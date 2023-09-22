#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Prints all the elements of a list_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t list_len(const list_t *h)
{
size_t how_much = 0;
while (h)
{
how_much++;
h = h->next;
}
return (how_much);
}
