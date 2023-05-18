#include "main.h"
#include <stdlib.h>

/**
 * _calloc - we put Main Entry
 * @nmemb: we input
 * @size: we input
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int is;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (is = 0; is < (nmemb * size); is++)
		p[is] = 0;
	return (p);
}
