#include "main.h"
/**
 *_strncat - function that concatenates two strings. it will use
 * at most n bytes from src. src does not need to be null terminated.
 *@dest: pointer to destination string.
 *@src: pointer to source string.
 *@n: number of bytes to be concatenated.
 *
 *Return: pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int th, j;
/* j is a counter for  n bytes of src to be concatenated */
/* length = length of destination string */

	th = 0;
	while (dest[th] != '\0')
	{
		th++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, th++)
	{
		dest[th] = src[j];
	}
	dest[th] = '\0';
	return (dest);
}
