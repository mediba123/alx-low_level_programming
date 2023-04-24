#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase, followed
 *        by a new line
 *
 * Return: exit successful.
 */

int main(void)
{
	unsigned char NumberHexadecimal;

	NumberHexadecimal = '0';
	while (NumberHexadecimal != ('\n' + 1))
	{
		if (NumberHexadecimal == ('9' + 1))
			NumberHexadecimal = 'a';
		else if (NumberHexadecimal == ('f' + 1))
			NumberHexadecimal = '\n';
		putchar(NumberHexadecimal++);
	}
	return (0);
}

