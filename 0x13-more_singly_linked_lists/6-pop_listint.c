#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 *
 * Return: The data of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
int data;
listint_t *s;

if (*head == NULL)
return (0);

s = *head;
*head = (*head)->next;
data = s->n;
free(s);

return (data);
}
