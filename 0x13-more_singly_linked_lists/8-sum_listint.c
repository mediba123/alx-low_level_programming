#include "lists.h"

/**
 * sum_listint - sum of list
 * a linked list.
 * @head: head of a list.
 *
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int number;

	number = 0;
	while (head != NULL)
	{
		number += head->n;
		head = head->next;
	}

	return (number);
}
