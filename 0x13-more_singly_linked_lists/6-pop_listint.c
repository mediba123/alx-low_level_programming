#include "lists.h"

/**
 * pop_listint - the head node of
 * a list
 * @head: list of head.
 *
 * Return: node's data.
 */
int pop_listint(listint_t **head)
{
	int node;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	node = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (node);
}
