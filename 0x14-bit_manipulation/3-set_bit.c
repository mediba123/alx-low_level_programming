#include "main.h"

/**
 * set_bit - value of a bit  to 1.
 * @n: bit pointer.
 * @index: to set the value at - start at 0.
 *
 * Return: If error  - -1.
 *         Otherwise - 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
