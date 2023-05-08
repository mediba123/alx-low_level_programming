#include "main.h"
#define NULL 0

/**
*   _strstr - locate and return pointer to first occurence of substring
*    @haystack: string to search
*     @needle: target substring to search for
*  Return: pointer to index of string at first occurence of whole substring
*/

char *_strstr(char *haystack, char *needle)
{
int in = 0, js, xx;

if (needle[0] == '\0')
return (haystack);

while (haystack[i] != '\0') /* iterate through haystack */
{
/* if a byte matches first char of needle */
/* interate through needle until match ends */
if (haystack[in] == needle[0])
{
xx = in, js = 0;
while (needle[js] != '\0')
{
if (haystack[xx] == needle[js])
xx++, js++;
else
			break;
} /* if matched throughout, return haystack */
if (needle[js] == '\0')
{
return (haystack + in);
}
}
in++;
}
return (NULL); /* No match */
}
