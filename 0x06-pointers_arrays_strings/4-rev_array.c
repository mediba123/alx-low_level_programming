#include "main.h"
/**
 *reverse_array - revereses an array.
 *@a: pointer to array.
 *@n: number of elements of an array.
 *
 *Return: void.
 */
void reverse_array(int *a, int n)
{
	int mp, r;

	n = n - 1;
	r = 0;
	while (r <= n)
	{
		mp = a[r];
		a[r++] = a[n];
		a[n--] = mp;
	}
}
