#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return:void
 */
void print_alphabet_x10(void)
{
	char alpha = 'a';
int counter = 10;
while (counter > 0)
{
while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}
putchar('\n');
counter--;
alpha = 'a';
}
}
