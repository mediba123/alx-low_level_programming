#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes -the  print the opcodes of this program
 * @a: the address of the main function
 * @n: the number of bytes to print
 *
 * Return: void
**/
void print_opcodes(char *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%.2hhx", a[i]);
if (i < n - 1)
printf(" ");
}
printf("\n");

}

/**
 * main - the prints the opcodes of its own main function
 * @argc: the number of arguments passed to the function
 * @argv: the array of pointers to arguments
 *
 * Return: always O
 */
int main(int argc, char **argv)
{
int n;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
n = atoi(argv[1]);
if (n < 0)
{
printf("Error\n");
exit(2);
}
print_opcodes((char *)&main, n);
return (0);
}
