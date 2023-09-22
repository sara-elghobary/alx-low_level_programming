#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @str: The string to be duplicated and stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 *
 * Description: This function creates a new node, duplicates
 * the provided string,
 * sets the new node's data and next pointer, updates the head
 * pointer to the new node,
 * and returns the address of the new node. If memory allocation
 * fails, it returns NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
char *newstr;

list_t *new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
free(new_node);
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
new_node->next = *head;

*head = new_node;

return (new_node);

}
