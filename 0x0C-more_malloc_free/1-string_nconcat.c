#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - we Main Entry
 * @s1: we input here
 * @s2: we input here
 * @n: we input here
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int is, js, ks;
	char *s;

	if (s1 == NULL)
		is = 0;
	else
	{
		for (is = 0; s1[is]; is++)
			;
	}
	if (s2 == NULL)
		js = 0;
	else
	{
		for (js = 0; s2[js]; js++)
			;
	}
	if (js > n)
		js = n;
	s = malloc(sizeof(char) * (is + js + 1));
	if (s == NULL)
		return (NULL);
	for (ks = 0; ks < is; ks++)
		s[ks] = s1[ks];
	for (k = 0; ks < js; ks++)
		s[ks + is] = s2[ks];
	s[is + js] = '\0';
	return (s);
}
