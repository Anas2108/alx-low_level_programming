#include "main.h"

/**
 * print_line - check for a digit
 * @n : number of _ to be printed
 * Return:void
 */

void print_line(int n)
{
int counter = 0;
while(counter >= 0 && counter < n)
{
putchar('_');
counter++;
}
putchar('\n');
}
