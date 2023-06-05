#include "lists.h"

/**
 * insert_nodeint_at_index - new node added
 * at a given position.
 * @head: list of the head.
 * @idx: where the new node is
 * added.
 * @n: the integer element.
 *
 * Return:  new node address , or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int in;
	listint_t *new;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (in = 0; in < idx - 1 && h != NULL; in++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = h->next;
		h->next = new;
	}

	return (new);
}
