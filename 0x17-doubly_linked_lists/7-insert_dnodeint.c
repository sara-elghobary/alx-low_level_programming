#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node at a given
 * position in a dlistint_t linked list
 * @h: Pointer to the address of the head of the doubly linked list
 * @idx: Index where the new node should be added (starting from 0)
 * @n: Data to be stored in the new node
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new_node;
	size_t count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = current;
		if (current != NULL)
			current->prev = new_node;
		*h = new_node;  /* Update the head pointer */
		return (new_node);
	}
	while (current != NULL)
	{
		if (count == idx)
		{
			new_node->prev = current->prev;
			new_node->next = current;

			if (current->prev != NULL)
				current->prev->next = new_node;
			else
				*h = new_node;  /* Update the head pointer if inserting at the beginning */
			current->prev = new_node;
			return (new_node);
		}

		current = current->next;
		count++;
	}
	free(new_node);
	return (NULL);
}
