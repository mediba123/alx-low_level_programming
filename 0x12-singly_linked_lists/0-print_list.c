#include <stdio.h>
#include "lists.h"
/**
 * print_list - the linked list should be printed
 * @h: section for pointer
 * Return: calculation of node
**/
size_t print_list(const list_t *h)
{
	size_t ni = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		ni++;
	}
	return (ni);
}
