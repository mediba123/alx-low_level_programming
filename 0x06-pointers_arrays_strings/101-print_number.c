#include "main.h"
/**
 *print_number - prints an integer.
 *only using the putchar function.
 *noarrays and pointers.
 *@n: integer to be printed.
 *
 *Return: void.
 */
void print_number(int n)
{
	unsigned int m;
/*check if number is negative*/
	m = n;
	if (n < 0)
	{
		_putchar(45);
		m = -n;
	}
/* print number by recursion*/
	if (m / 10)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) + '0');
}
