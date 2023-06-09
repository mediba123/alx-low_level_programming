#include "main.h"

/**
 * flip_bits - number of bits
 *             from one number to another.
 * @n: number.
 * @m: number to flip.
 *
 * Return: necessary number  flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
