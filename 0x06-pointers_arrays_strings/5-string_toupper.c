#include "main.h"
/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *@x: pointer to string.
 *
 *Return: pointer to uppercase string.
 */
char *string_toupper(char *x)
{
	int th;

	th = 0;

	while (x[th] != '\0')
	{
		if (x[th] >= 97 && x[th] <= 122)
		{
			x[th] = x[th] - 32;
		}
		th++;
	}
	return (x);
}
