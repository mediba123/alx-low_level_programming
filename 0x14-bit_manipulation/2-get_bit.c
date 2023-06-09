#include "main.h"

/**
 * get_bit - value of a bit at a given index
 * @n: The bit.
 * @index: index value - indices start at 0.
 *
 * Return: If  - -1.
 *         Otherwise - The value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
