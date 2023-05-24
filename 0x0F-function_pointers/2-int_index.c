#include "function_pointers.h"

/**
 *int_index - the series for an integer
 *@array: the input array
 *@size: the size of an array
 *@cmp: the comparison function
 *Return: the index of integer in cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && cmp && size && array)
		for (i = 0; i <= size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
