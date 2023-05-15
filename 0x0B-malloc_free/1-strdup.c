#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Main Entry
 * @str: input
 * Return: 0
 */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int leng, is;

	/* check is str is null */
	if (str == NULL)
	{
		return (NULL);
	}

	leng = 0;
	while (str[leng] != '\0')
	{
		leng++;
	}

	nstr = malloc(sizeof(char) * (leng + 1));

	/*check if malloc was successful*/
	if (nstr == NULL)
	{
		return (NULL);
	}

	for (is = 0; is < leng; is++)
	{
		nstr[is] = str[is];
	}
	nstr[leng] = '\0';
	return (nstr);
}
