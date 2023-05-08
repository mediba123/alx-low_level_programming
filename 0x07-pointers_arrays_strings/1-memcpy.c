#include "main.h"
/**
* char *_memcpy - copies n bytes from memory area src to memory area dest
*  @dest: destination
*   @src: source
*    @n: number of bytes
*     Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

int len = n;

if (len > 0)
{
int n;

for (n = 0; i < len; n++)
dest[n] = src[n];
}
return (dest);

}
