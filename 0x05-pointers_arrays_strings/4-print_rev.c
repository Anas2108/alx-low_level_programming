#include "main.h"

/**
 * print_rev -function that print string in reverse
 * @s:  pointer
 * Return: void
 */

void print_rev(char *s)
{
int counter = 0;
while (s[counter] != '\0')
{
counter++;
}

while ((counter-1) >= 0)
{
putchar(s[counter-1]);
counter--;
}
putchar('\n');
}
