#include "main.h"
/**
 *_memset - memory with a constant byte
 *@s: memory with pointer 
 *@b: set with value
 *@n: memory with byte
 *Return: dest
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	/*Delacring FOR*/
	for (i = 0; i < n; i++)
	{
		*(s + i) = b; /*add 1 position s*/

	} /*END FOR*/
	return (s);
}
