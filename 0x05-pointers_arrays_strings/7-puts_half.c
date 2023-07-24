#include "main.h"

/**
 * puts_half - function that prints the second half of string
 * @str:  pointer
 * Return: void
 */

void puts_half(char *str)
{
int counter = 0;
int half = 0;
while (str[counter] != '\0')
{
counter++;
}
if (counter % 2 == 0)
half = counter / 2;
else
half = (counter - 1) / 2;
while (str[half] != '\0')
{
putchar(str[half]);
half++;
}
putchar('\n');
}
