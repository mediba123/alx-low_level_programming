#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int inn;

	for (inn  = 48; inn  < 58; inn++)
	{
		putchar(inn);
	}
	for (inn  = 97; inn  < 103; inn++)
	{
		putchar(inn);
	}
	putchar('\n');
	return (0);
}

