#include "main.h"

/**
 * print_square - print n*n square
 * @n : number of _ to be printed
 * Return:void
 */

void print_square(int n)
{

	int i = 0, ii;

	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < n)
		{
			putchar('#');
			ii++;
		}

		putchar('\n');
		i++;
	}
	if (i == 0)
		putchar('\n');

}
