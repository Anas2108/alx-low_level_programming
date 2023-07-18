#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
* Description: print the alphabet using putchar
 * and if it is positive, negative, or zero
 * Return: void
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');
}

