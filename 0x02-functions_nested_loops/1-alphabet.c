#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main"
/**
* Description: print the alphabet using putchar
 * and if it is positive, negative, or zero
 * Return: 0
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

int main(void)
{
print_alphabet();
return (0);
}
