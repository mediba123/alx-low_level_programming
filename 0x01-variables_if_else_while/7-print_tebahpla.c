#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ed;

	for (ed = 'z'; ed >= 'a'; ed--)
	{
		putchar(ed);
	}
	putchar('\n');
	return (0);
}
