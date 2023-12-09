#include "lists.h"
/**
 * add_dnodeint - Add a new node at the beginning of a dlistint_t list
 * @head: Address of the head pointer
 * @n: Integer value to be stored in the new node
 * Return: Address of the new element, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->prev = NULL;
new->n = n;
new->next = *head;

if (*head != NULL)
(*head)->prev = new;

*head = new;
return (new);

}
