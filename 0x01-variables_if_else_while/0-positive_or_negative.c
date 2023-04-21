#include <stdio>
#include <time.h>
#include <stdlib.h>
/**
 * This is header
 * Task - a random number to the variable
 * positive,nagetive or zero
 * Return:  Always zero (success)
 */
int main(void)
{ 
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0)
		printf("%d is positive\n", n);
       if else (n<0)
                printf("%d is negative\n", n);
       else printf("%d is zero\n", n);

	return (0);
}
