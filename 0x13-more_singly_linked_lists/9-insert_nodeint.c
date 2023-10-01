#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a
 * given position in a list.
 * @head: A pointer to a pointer to the head of the list.
 * @idx: The index at which to insert the new node (starting at 0).
 * @n: The data to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int len = 0;
int i;
listint_t *s;
listint_t *ss;
listint_t *new_node;

s = malloc(sizeof(listint_t));
if (s == NULL)
return (NULL);

s->n = n;
ss = *head;
while (ss != NULL)
{
len++;
ss = ss->next;
}
if (idx > len)
{
free(s);
return (NULL);
}
if (idx == 0)
{
s->next = *head;
*head = s;
return (s);
}
for (i = 0; i < idx - 1; i++)
{
ss = ss->next;
}
new_node = ss->next;
ss->next = s;
s->next = new_node;
return (s);
}
