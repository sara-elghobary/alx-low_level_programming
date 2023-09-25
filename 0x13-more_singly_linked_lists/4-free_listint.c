#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the linked list.
 *
 * Description: This function frees the memory allocated
 * for all nodes in the linked list
 * starting from the given head node. It iterates through
 * the list, freeing each node,
 * and updating the head pointer until the entire list is freed.
 */
void free_listint(listint_t *head)
{
listint_t *fre;

while (head != NULL)
{
fre = head;
head = head->next;
free(fre);

}
}
