#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - Computes the sum of all the data (n) in a
 * listint_t linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The sum of all the data values in the linked list.
 * If the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *s;

s = head;
if (head == NULL)
return (0);

while (s != NULL)
{
sum += s->n;
s = s->next;
}
return (sum);
}
