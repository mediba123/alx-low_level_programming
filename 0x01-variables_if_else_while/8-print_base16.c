i#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int in;

	for (in  = 48; in  < 58; in++)
	{
		putchar(in);
	}
	for (in  = 97; in  < 103; in++)
	{
		putchar(in);
	}
	putchar('\n');
	return (0);
}

