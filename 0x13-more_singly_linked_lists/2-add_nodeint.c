#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *s;

s = malloc(sizeof(listint_t));

if (s == NULL)
return (NULL);
else
{
s->n = n;
s->next = *head;
*head = s;
}
return (s);

}
