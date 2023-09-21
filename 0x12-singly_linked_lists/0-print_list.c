#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
int how_much = 0;

while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)");
}
else 
printf("[%u] (%s)",h->len ,h->str );
how_much++;
h = h->next;
}
return (how_much);
}
