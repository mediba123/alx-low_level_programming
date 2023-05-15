#include "main.h"
#include <stdlib.h>
/**
 * create_array - Main Entry
 * @size: input
 * @c: input
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
		char *arr;
		unsigned int is;

		if (size == 0)
		{
			return (NULL);
		}

		arr = malloc(sizeof(char) * size);

		if (arr == NULL)
		{

			return (NULL);
		}

		for (is = 0; is < size; is++)
		{
			arr[is] = c;
		}

		return (arr);
}
