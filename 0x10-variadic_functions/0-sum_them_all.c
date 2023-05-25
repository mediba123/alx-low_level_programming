#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - the return sum when given unknown amount of arguments
* @n: the integers to add
* Return: the sum
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int sum = 0, i;

va_list ptr;

if (n == 0)
return (0);
va_start(ptr, n);

for (i = 0; i < n; i++)
sum += va_arg(ptr, int);
va_end(ptr);

return (sum);
}
