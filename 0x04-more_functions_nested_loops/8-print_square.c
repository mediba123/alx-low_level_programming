#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int z, js;

		for (z = 0; z < size; z++)
		{
			for (js = 0; js < size; js++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
