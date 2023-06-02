#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - beginning of a linked list add node
 * @head: list should contain double pointer
 * @str: add in the node
 *
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t said;
	list_t *node12;

	if (str == NULL)
	{
		return (NULL);
	}

	node12 = malloc(sizeof(list_t));
	if (node12 == NULL)
	{
		return (NULL);
	}
	node12->str = strdup(str);

	for (said = 0; str[said]; said++)
	;

	node12->len = said;
	node12->next = *head;
	*head = node12;
	return (node12);
}
