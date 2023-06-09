#include "main.h"

/**
 * clear_bit - value of a bit to 0.
 * @n: pointer bit.
 * @index: index to set - indices start at 0.
 *
 * Return: If  occurs - -1.
 *         Otherwise - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
