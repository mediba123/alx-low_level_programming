#include "lists.h"

/**
 * listint_len - the number of elements in
 * a linked list.
 * @h: list of head.
 *
 * Return: nodes of number.
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		h = h->next;
		number++;
	}
	return (number);
}
