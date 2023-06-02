#include "lists.h"
/**
 * list_len - total of the number of elements
 * @h: Pointer section
 * Return:  assinge Integer
 **/
size_t list_len(const list_t *h)
{
const list_t *temp;
unsigned int count = 0;
temp = h;
while (temp)
{
count++;
temp = temp->next;
}
return (count);
}
