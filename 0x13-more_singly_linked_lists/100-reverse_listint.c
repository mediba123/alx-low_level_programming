#include "lists.h"

/**
 * reverse_listint - linked list.
 * @head: list of head.
 *
 * Return: first node point.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pin;
	listint_t *node;

	pin = NULL;
	node = NULL;

	while (*head != NULL)
	{
		node = (*head)->next;
		(*head)->next = pin;
		pin = *head;
		*head = node;
	}

	*head = pin;
	return (*head);
}
