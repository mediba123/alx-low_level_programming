#include "lists.h"

/**
 * add_nodeint_end - the end
 * of a linked list
 * @head: list of head.
 * @n: n element.
 *
 * Return: new element of address. return null.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *term;
	listint_t *pin;

	(void)pin;

	term  = malloc(sizeof(listint_t));

	if (term == NULL)
		return (NULL);

	term->n = n;
	term->next = NULL;
	pin = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (pin->next != NULL)
		{
			pin = pin->next;
		}
		pin->next = term;
	}

	return (*head);
}
