#include <stdio.h>

#include <time.h>

#include <stdlib.h>
/**
 * main - main type
 * Description: Get a random number 
 * positive,nagetive or zero
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int lat;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (lat == 0)
	{
		printf("Lat digit of %d is %d and is 0\n", n, lat);
	}
	else
	{
		if (lat > 5)
		{
			printf("Lat digit of %d is %d and is greater than 5\n", n, lat);
		}
		else if (last < 6)
		{
			printf("Lat digit of %d is %d and is less than 6 and not 0\n", n, lat);
		}
	}	return (0);
}
