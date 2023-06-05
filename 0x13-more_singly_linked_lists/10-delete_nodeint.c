#include "lists.h"

/**
 * delete_nodeint_at_index - node to delete at index
 * of a linked list.
 * @head: list of head.
 * @index: list where the node is
 * deleted.
 *
 * Return: if succeeded 1, failed -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int in;
	listint_t *prev;
	listint_t *next;

	prev = *head;

	if (index != 0)
	{
		for (in = 0; in < index - 1 && prev != NULL; in++)
		{
			prev = prev->next;
		}
	}

	if (prev == NULL || (prev->next == NULL && index != 0))
	{
		return (-1);
	}

	next = prev->next;

	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}

	return (1);
}
