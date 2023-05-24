#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator -the prints an integer
 * @array: the is pointer to int
 * @action: the is a pointer to the function
 * @size: the size of the array
 *
 * Return: Nothing.
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
