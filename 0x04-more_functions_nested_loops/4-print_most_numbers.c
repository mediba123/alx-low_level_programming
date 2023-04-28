#include "main.h"
/**
 *print_most_numbers - print from 0 to 9
 * follow by a new line
 * expect 2 and 4
 */
void print_most_numbers(void)
{
	int f;

	for (f = 0; f <= 9; f++)
	{
		if (f != 2 && f != 4)
		{
			_putchar(f + '0');
		}

	}

	_putchar('\n');
}
