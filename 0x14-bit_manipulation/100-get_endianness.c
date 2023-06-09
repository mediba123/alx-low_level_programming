#include "main.h"

/**
 * get_endianness - the endianness.
 *
 * Return: big-endian - 0.
 *         little-endian - 1.
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
