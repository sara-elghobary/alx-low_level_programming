#include "lists.h"
/**
 * free_dlistint -  frees a dlistint_t list.
 * @head: Address of the head pointer
 * Return: Address of the new element, or NULL if it fails
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
dlistint_t *next_node;

while (current != NULL)
{
next_node = current->next;
free(current);
current = next_node;
}

}
