#include "main.h"
/**
*_strcat - function that concatenates two strings.
*@dest: pointer to destination string.
*@src: pointer to source string.
*
*Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
int le, j;

le = 0;
while (dest[le] != '\0')
{
le++;
}
for (j = 0; src[j] != '\0'; j++, le++)
{
dest[le] = src[j];
}
dest[le] = '\0';
return (dest);
}
