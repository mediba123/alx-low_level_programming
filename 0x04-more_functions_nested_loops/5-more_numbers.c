#include "main.h"
/**
 * more_numbers - print 10 times the number
 * followed by a new line
 * Return: always 0
 */
void more_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x <= 10)
				_putchar(x % 10 + '0')
		}
		_putchar('\n');
	}
}
