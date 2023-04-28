#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int in;

	for (in = 1; in <= 100; in++)
	{
		if (in % 3 == 0 && in % 5 != 0)
		{
			printf(" Fizz");
		} else if (in % 5 == 0 && in % 3 != 0)
		{
			printf(" Buzz");
		} else if (in % 3 == 0 && in % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (in == 1)
		{
			printf("%d", in);
		} else
		{
			printf(" %d", in);
		}
	}
	printf("\n");

	return (0);
}
