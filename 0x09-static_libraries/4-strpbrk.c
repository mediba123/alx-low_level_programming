#include "main.h"
#define NULL 0

/**
*   _strpbrk - return pointer to byte in s that matches a byte in accept
*    @s: string to search
*     @accept: target matches
*      Return: pointer to index of string at first occurence
*/

char *_strpbrk(char *s, char *accept)
{
int xx = 0, yo;
while (s[xx] != '\0')
{
for (yo = 0; accept[yo] != '\0'; yo++)
{
if (s[xx] == accept[yo])
{
s = &s[xx];
return (s);
}

}
xx++;
}

return (NULL);
}
