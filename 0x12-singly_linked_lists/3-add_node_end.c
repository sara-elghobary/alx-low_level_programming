#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @str: The string to be duplicated and stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 *
 * Description: This function creates a new node,
 * duplicates the provided string,
 * sets the new node's data and next pointer, and adds
 * it to the end of the linked list.
 * If the list is initially empty, the new node becomes the head.
 * If memory allocation fails, it returns NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
char *newstr;

list_t *new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}

newstr = strdup(str);
if (newstr == NULL)
{
free(new_node);
return (NULL);
}

new_node->str = newstr;
new_node->len = strlen(str);
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{
list_t *current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = new_node;
}

return (new_node);
}
