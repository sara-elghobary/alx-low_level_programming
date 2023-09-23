#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - Frees the memory allocated for a list_t linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Description: This function frees the memory allocated
 * for all nodes in the linked list
 * starting from the given head node. It iterates through the
 * list, freeing each node,
 * and updating the head pointer until the entire list is freed.
 */
void free_list(list_t *head)
{
list_t *current;

while (head != NULL)
{
current = head;
head = head->next;
free(current->str);
free(current);
}
}
