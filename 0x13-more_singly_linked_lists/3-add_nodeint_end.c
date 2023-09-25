#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *s, *t;

s = malloc(sizeof(listint_t));

if (s == NULL)
return (NULL);

s->n = n;
s->next = NULL;

if (*head == NULL)
{
*head = s;
}
else
{
t = *head;
while (t->next != NULL)
{
t = t->next;
}
t->next = s;
}

return (s);
}
