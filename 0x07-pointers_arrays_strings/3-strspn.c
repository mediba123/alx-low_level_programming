#include "main.h"
/**
*   _strspn - return length of string that matches values consistently
*    @s: string to search
*     @accept: target matches
*      Return: number of bytes consecutively matched
*/

unsigned int _strspn(char *s, char *accept)
{
int in = 0, x;
int mat = 0;

while (s[in] != '\0') /*iterate through string*/
{

for (x = 0; accept[x] != '\0'; x++) /*iterate through target*/
{
if (s[in] == accept[x]) /*record & break at first match*/
{
mat++;
break;
}
if (accept[x + 1] == '\0' && s[in] != accept[x])
return (mat);/*return if idx doesn't match*/
}
i++;
}
return (mat); /* return num if all match till end */

}
