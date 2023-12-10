#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete the node at a
 * given position in a dlistint_t linked list
 * @head: Pointer to the address of the head of the doubly linked list
 * @index: Index of the node to be deleted (starting from 0)
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	size_t count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			if (current->prev != NULL)
				current->prev->next = current->next;
			else
				*head = current->next;

			if (current->next != NULL)
				current->next->prev = current->prev;

			free(current);
			return (1);  /* Return 1 to indicate success */
		}

		current = current->next;
		count++;
	}

	return (-1);  /* Return -1 to indicate failure (index out of bounds) */
}
