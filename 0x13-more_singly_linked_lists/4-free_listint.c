#include "lists.h"

/**
 * free_listint - linked list
 * @head: list of head.
 *
 * Return: return zero.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
