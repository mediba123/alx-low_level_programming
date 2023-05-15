#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Main Entry
 * @ac: input
 * @av: input
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int is, in, ko = 0, leng = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (is = 0; is < ac; is++)
	{
		for (in = 0; av[is][in]; in++)
			leng++;
	}
	leng += ac;

	str = malloc(sizeof(char) * leng + 1);
	if (str == NULL)
		return (NULL);

	for (is = 0; is < ac; is++)
	{
		for (in = 0; av[is][in]; in++)
		{
			str[ko] = av[is][in];
			ko++;
		}
		if (str[ko] == '\0')
		{
			str[ko++] = '\n';
		}
	}
	return (str);
}
