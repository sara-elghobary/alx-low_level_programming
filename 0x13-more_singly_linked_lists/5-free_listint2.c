#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: A pointer to a pointer to the head of the linked list.
 *
 * Description: This function frees the memory allocated
 * for all nodes in the linked list
 * starting from the given head node. It iterates through
 * the list, freeing each node,
 * and updates the head pointer to NULL until the entire list is freed.
 */
void free_listint2(listint_t **head)
{
listint_t *fre;

while (*head != NULL)
{
fre = *head;
*head = *head->next;
free(fre);

}
}
