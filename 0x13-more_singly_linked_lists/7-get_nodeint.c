#include "lists.h"

/**
 * get_nodeint_at_index - linked list
 * @head: list of head.
 * @index: index of the node.
 *
 * Return: node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int in;

	for (in = 0; in < index && head != NULL; in++)
	{
		head = head->next;
	}

	return (head);
}
