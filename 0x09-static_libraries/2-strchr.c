#include "main.h"
#define NULL 0

/**
*   _strchr - locate 1st occurrence of char in string and returns pointer there
*    @s: string to search
*     @c: target characer
*      Return: pointer to that character in string
*/

char *_strchr(char *s, char c)
{
int in = 0;

while (s[in] != '\0' && s[in] != c)
in++;

if (s[in] == c)
return (&s[in]);
else
return (NULL);
}
