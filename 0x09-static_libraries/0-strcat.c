#include "main.h"

/**
 * _strcat - two strings
 *
 * @dest: create a pointer character that will be changed
 *
 * @src: character that will also be changed
 * Return: 0
 */

char *_strcat(char *dest, char *src)

{
	int i, j;

	i = 0;

	while (dest[i] != '\0')

	{
		i++;
	}
	j = 0;

	while (src[j] != '\0')

	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);

}
