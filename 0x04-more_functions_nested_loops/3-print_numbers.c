#include "main.h"
/**
 *print_numbers - print  numbers, from 0 to 9
 *follow by new line (\n)
 *Return: 0
 */
void print_numbers(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
		_putchar(d + '0');
	}

	_putchar ('\n');
}
