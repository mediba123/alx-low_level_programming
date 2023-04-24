#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: exit successful.
 */

int main(void)
{
	unsigned int NumberFrom0To9, StoredNumber;

	NumberFrom0To9 = '0';
	while (NumberFrom0To9 != ('\n' + 1))
	{
		putchar(NumberFrom0To9++);
		if (NumberFrom0To9 > '0' && NumberFrom0To9 <= '9')
			StoredNumber = NumberFrom0To9, NumberFrom0To9 = ',';
		else if (NumberFrom0To9 == (',' + 1))
			NumberFrom0To9 = ' ';
		else if (NumberFrom0To9 == (' ' + 1))
			NumberFrom0To9 = StoredNumber;
		else if (NumberFrom0To9 == ('9' + 1))
			NumberFrom0To9 = '\n';
/*
 * When the variable reaches 9, in the putchar function 1 is immediately
 * added and this is my limit condition
 */
	}
	return (0);
}
