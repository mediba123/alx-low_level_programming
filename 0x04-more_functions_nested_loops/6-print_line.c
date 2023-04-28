#include "main.h"
/**
 *print_line - a function that draws a straight line
 *in the terminal
 *@n: the number of times the character is printed
 */
void print_line(int n)
{
	{
		int index = 0;

		while (index < n)
		{
			_putchar('_');
			index++;
		}
		_putchar('\n');
	}
}
