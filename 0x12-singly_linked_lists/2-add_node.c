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
list_t *new;
unsigned int leng = 0;
while (str[leng])
leng++;
new = malloc(sizeof(list_t));
if (!new)
return (NULL);
new->str = strdup(str);
new->leng = leng;
new->next = (*head);
(*head) = new;
return (*head);
}
