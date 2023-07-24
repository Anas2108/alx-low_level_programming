#include "main.h"

/**
 * print_array - function that prints the array
 * @a:  pointer
 * @n:  number of elements to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
int i;
for (i = 0 ; i < n ; i++)
{
if (i != (n - 1))
printf("%i, ", a[i]);
else
printf("%i", a[i]);
}
putchar('\n');
}
