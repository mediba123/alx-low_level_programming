#include "lists.h"

/**
 * print_listint - print list
 * @h: the head of list.
 *
 * Return: nodess.
 */
size_t print_listint(const listint_t *h)
{
	size_t numbers = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numbers++;
	}
	return (numbers);
}
